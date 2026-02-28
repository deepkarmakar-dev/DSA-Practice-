#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address)
{
   string ans="";
    for(int i=0;i<address.length();i++)
    {
      if(address[i]=='.')
      {
        ans+="[.]";
      }
      else{
        ans+=address[i];
      }
    }
    return ans;
}

int main()
{
    string address="192.168.0.1";
    
    
    
    string result = defangIPaddr(address);
    
    cout << result;
    
    return 0;
}
