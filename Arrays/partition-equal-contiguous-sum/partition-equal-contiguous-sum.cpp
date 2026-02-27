#include <iostream>
#include <vector>
using namespace std;

bool canPartition(vector<int>& arr)
{


    int total=0;
    for(auto i:arr)
    {
        total+=i;
    }

    if(total % 2 != 0)
        return false;


    int sum=0;
    int ans=0;
    for(int i=0; i<arr.size()-1; i++)
    {
        sum=sum+arr[i];



        if(sum==total/2)
        {
            return true;
        }
    }
    return false;


}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    if(canPartition(arr))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
