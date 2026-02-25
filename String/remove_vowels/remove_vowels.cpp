#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
     return true;
    }
    return false;



}

void removeVowels(string &s) {
   string remove="";
    for(int i=0; i<s.length(); i++)
    {
        if(!isVowel(s[i]))
        {
           remove+=s[i];

        }
    }
    s=remove;

}

int main() {

    string s = "Hello World";

    removeVowels(s);

    cout << s;

    return 0;
}
