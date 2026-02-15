#include <iostream>
using namespace std;

int firstOccurrences(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            end = mid- 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    return ans;
}


int lastOccurrences(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cout << "Enter target element: ";
    cin >> target;

    cout << "First occurrence index: ";
    cout << firstOccurrences(arr, n, target);
    cout << "last occurrence index: ";
    cout << lastOccurrences(arr, n, target);

    return 0;
}
