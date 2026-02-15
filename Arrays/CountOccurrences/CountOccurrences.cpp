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
            end = mid - 1;   // left side search
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
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
            start = mid + 1;   // right side search
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
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

    int first = firstOccurrences(arr, n, target);
    int last  = lastOccurrences(arr, n, target);

    cout << "First occurrence index: " << first << endl;
    cout << "Last occurrence index: " << last << endl;

    int count = 0;
    if(first != -1)
        count = last - first + 1;

    cout << "Count occurrences: " << count << endl;

    return 0;
}
