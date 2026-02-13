#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n)
{
    int maxi = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            smax = maxi;
            maxi = arr[i];
        }
        else if (arr[i] < maxi && arr[i] > smax)
        {
            smax = arr[i];
        }
    }

    if (smax == INT_MIN)
        return -1;

    return smax;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << secondLargest(arr, n);

    return 0;
}
