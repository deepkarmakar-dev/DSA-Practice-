#include <iostream>
#include <vector>
#include<stack>
using namespace std;

int stringManipulation(vector<string>& arr)
{
    stack<string> st;

    for(int i=0; i<arr.size(); i++)
    {
        if(!st.empty() && arr[i]==st.top())
        {
            st.pop();
        }
        else {
            st.push(arr[i]);
        }
    }
    return st.size();

}

int main()
{
    vector<string> arr = {"ab", "aa", "aa", "bcd", "ab"};

    int result = stringManipulation(arr);

    cout << result;

    return 0;
}
