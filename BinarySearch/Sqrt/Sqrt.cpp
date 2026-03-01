#include <iostream>
using namespace std;


    int mySqrt(int x) {
        
        
        int start=1,end=x;
        long long mid;
        int ans=0;
        while(start<=end)
        {
           mid=start+(end-start)/2;
           
           if(mid*mid==x)
           {
             ans=mid;
             return ans;
           }
           else if(mid*mid<x)
           {
             ans=mid;
             start=mid+1;
           }
           else{
             end=mid-1;
           }
        }
        return ans;
    }

int main()
{
    
    
    int x = 28;
    
    int ans = mySqrt(x);
    
    cout << "Square root  " << ans << endl;
    
    return 0;
}
