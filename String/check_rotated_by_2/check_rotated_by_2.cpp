#include <iostream>
#include <string>
using namespace std;

string clockwise(string s)
{
   char last=s[s.length()-1];
   s.pop_back();
   
   string temp=last+s;
   return temp;
   
}

string anticlockwise(string s)
{

   char first=s[0];
   s.erase(0,1);
   string temp=s+first;
   return temp;

}

bool isRotated(string s1, string s2)
{
    string ans=clockwise(s1);
    ans=clockwise(ans);
 
    if(ans==s2)
    {
        return true;
    }

    string ans2=anticlockwise(s1);
    ans2=anticlockwise(ans2);
    
  


    if(ans2==s2)
    {
        return true;
    }
    
    return false;
}

int main()
{
    string s1 = "amazon";
    string s2 = "azonam";

    if(isRotated(s1, s2))
        cout << "true";
    else
        cout << "false";
}
