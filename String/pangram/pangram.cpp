#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPangram(string s)
{
    // yaha apna logic likho
    vector<int> seen(26,0);

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            seen[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            seen[s[i]-'A']++;
        }
    }
    
    for(int i=0;i<26;i++)
    {
      if(seen[i]==0)
      {
       return false;
      }
    }
    return true;

}

int main()
{
    string s="The quick brown fox jumps over the lazy dog";
    

    if(isPangram(s))
    {
        cout << "Pangram";
    }
    else
    {
        cout << "Not Pangram";
    }

    return 0;
}
