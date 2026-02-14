#include <iostream>
#include <climits>
using namespace std;

int thirdLargest(int arr[], int n)
{
    if (n < 3)
        return -1;

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] < second && arr[i] > third)
        {
            third = arr[i];
        }
    }

    if (third == INT_MIN)
        return -1;

    return third;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << thirdLargest(arr, n);

    return 0;
}
