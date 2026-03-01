#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr)
{
    int start=0,end=arr.size()-1;
    int mid;
    int ans=arr[0];
    while(start<=end)
    {
       mid=start+(end-start)/2;
      if(arr[mid]>=arr[0])
      {
         start=mid+1;
      }
      else{
        ans=arr[mid];
         end=mid-1;
      }
    }
    
    return ans;
}

int main()
{
    vector<int> arr = {4,5,6,7,0,1,2};
    
    int ans = findMin(arr);
    
    cout << ans;
    
    return 0;
}
