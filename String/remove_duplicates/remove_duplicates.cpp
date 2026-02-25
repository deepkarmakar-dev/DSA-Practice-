#include <iostream>
#include<vector>
using namespace std;

void removeDuplicates(string &s) {
  string remove="";
  vector<int>freq(256,0);
  
  for(int i=0;i<s.length();i++)
  {
     if(freq[s[i]]==0)
     {
       remove+=s[i];
     }
     freq[s[i]]++;
  }
  
  cout << remove << endl;
  
    

}

int main() {

    string s = "programming";

    removeDuplicates(s);

  //  cout << s;

    return 0;
}
