#include <iostream>
#include <stack>
using namespace std;

bool backspaceCompare(string s, string t)
{
    stack<char>st;
    stack<char>tt; 
    
     for(int i=0;i<s.length();i++)
     {
        if( s[i]=='#')
        {
         if(!st.empty())
          st.pop();
        }
        else{
          st.push(s[i]);
        }
     }
     
     
     for(int i=0;i<t.length();i++)
     {
        if( t[i]=='#')
        {
        if(!tt.empty())
          tt.pop();
        }
        else{
          tt.push(t[i]);
        }
     }
     
     return st==tt;
     
}

int main()
{
    string s = "ab#c";
    string t = "ad#c";

    if(backspaceCompare(s, t))
        cout << "true";
    else
        cout << "false";

    return 0;
}
