#include <iostream>
#include <vector>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr)
{
    int start = 1;
    int end = arr.size() - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter mountain array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    int index =peakIndexInMountainArray(arr);

    cout << "Peak index: " << index << endl;
    if(index != -1)
        cout << "Peak value: " << arr[index] << endl;

    return 0;
}
