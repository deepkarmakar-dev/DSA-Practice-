#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{
    int count = 0;
    int major;

    
    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            major = arr[i];
            count = 1;
        }
        else if(major == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == major)
            count++;
    }

    if(count > n/2)
        return major;

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << majorityElement(arr, n);

    return 0;
}
