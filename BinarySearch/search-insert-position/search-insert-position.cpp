#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& arr, int target)
{
    int start=0,end=arr.size()-1;
    int ans=arr.size();
    while(start<=end)
    {
      int mid=start+(end-start)/2;
      
      if(arr[mid]==target)
      {
       return mid;
      }
      else if(arr[mid]<target)
      {
        
        start=mid+1;
      }
      else{
      ans=mid;
       end=mid-1;
      }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,2,  5, 6};
    int target = 9;

    int index = searchInsert(nums, target);

    cout << "Insert position: " << index << endl;

    return 0;
}
