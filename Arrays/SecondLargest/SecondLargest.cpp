#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr)
{
    int n = arr.size();

    if (n < 2)
        return -1;

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

    return (smax == INT_MIN) ? -1 : smax;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << secondLargest(arr);

    return 0;
}
