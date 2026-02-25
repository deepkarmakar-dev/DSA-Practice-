#include <iostream>
#include <vector>
#include<stack>
using namespace std;

vector<int> makeBeautiful(vector<int>& arr) {

   stack<int>st;
   
   for(int i=0;i<arr.size();i++)
   {
      if(!st.empty() && st.top()+arr[i]==0)
      {
        st.pop();
      }
      else{
      st.push(arr[i]);
      }
      
   }
   vector<int>result;
   
   while(!st.empty())
   {
     
     result.push_back(st.top());
     st.pop();
   
   }
   reverse(result.begin(), result.end());
   return result;


}

int main() {

    vector<int> arr = {4, 2, -2, 1};

    vector<int> result = makeBeautiful(arr);

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}
