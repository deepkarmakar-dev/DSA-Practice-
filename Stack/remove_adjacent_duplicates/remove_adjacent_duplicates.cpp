#include <iostream>
#include <string>
#include<stack>
using namespace std;

string removeDuplicates(string s)
{
    stack<char>st;
    string ans="";
    for(int i=0;i<s.length();i++)
    {
      if(!st.empty() && st.top()==s[i])
      {
        st.pop();
      }
      else
      {
       st.push(s[i]);
      }
    }
    
    while(!st.empty())
    {
      ans+=st.top();
      st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {

    string s = "abbaca";

    string result = removeDuplicates(s);

    cout << result << endl;

    return 0;
}
