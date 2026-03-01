#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;

string sortString(string s)
{
    vector<int>lower(26,0);
    string ans;
    for(int i=0;i<s.length();i++)
    {
      if(s[i] >= 'a' && s[i] <= 'z')
      {
        lower[s[i]-'a']++;
      }
    }
   
    for(int i=0;i<26;i++)
    {
      while(lower[i]!=0)
      {
        ans+=char(i+'a');
        lower[i]--;
      }
    }
    return ans;
    
    
}

int main()
{
    string s = "edcab";
    cout << sortString(s);

    return 0;
}
