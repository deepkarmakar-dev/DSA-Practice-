#include <iostream>
using namespace std;

void toLowerCase(string &s) {

   for(int i=0;i<s.length();i++)
   {
     if(s[i]>='A' && s[i]<='Z')
     {
        s[i]=s[i]+32;
     }
   }
    

}

int main() {

    string s = "HeLLo WoRLD";

    toLowerCase(s);

    cout << s;

    return 0;
}
