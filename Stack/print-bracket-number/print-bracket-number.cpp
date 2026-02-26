#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> printBracketNumber(string s)
{
    stack<int>st;
    int count=0;
    vector<int>ans;
    for(int i=0;i<s.length();i++)
    {
       if(s[i]=='(')
       {
         count++;
         st.push(count);
         ans.push_back(count);
       }
       else if(s[i]==')')
       {
         ans.push_back(st.top());
         st.pop();
       }
    }
    return ans;
}

int main()
{
    string s = "(aa(bdc))p(dee)";

    vector<int> ans = printBracketNumber(s);

    for(int num : ans)
        cout << num << " ";

    return 0;
}
