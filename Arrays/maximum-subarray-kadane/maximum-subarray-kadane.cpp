#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int>& arr)
{

    int prefix=0,maxi=arr[0];
    for(int i=0;i<arr.size();i++)
    {
      prefix+=arr[i];
      
      maxi=max(prefix,maxi);
      
      if(prefix<0)
     
     {
      prefix=0;
      }
    }
    return maxi;

}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxSubarraySum(arr);

    return 0;
}
