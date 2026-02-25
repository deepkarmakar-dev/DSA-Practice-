#include <iostream>
using namespace std;

void toUpperCase(string &s) {

   for(int i=0;i<s.length();i++)
   {
     if(s[i]>='a' && s[i]<='z')
     {
        s[i]=s[i]-32;
     }
   }
    

}

int main() {

    string s = "HeLLo WoRLD";

    toUpperCase(s);

    cout << s;

    return 0;
}
