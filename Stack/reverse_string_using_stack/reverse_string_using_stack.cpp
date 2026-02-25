#include <iostream>
#include <stack>
using namespace std;

void reverseString(string &s)
{
    stack<char>st;
    for(int i=0; i<s.length(); i++)
    {
        st.push(s[i]);
    }

    int i=0;
    while(!st.empty())
    {
        s[i]=st.top();
        st.pop();
        i++;
    }
}
int main() {

    string s = "hello";

    reverseString(s);

    cout << s << endl;

    return 0;
}
