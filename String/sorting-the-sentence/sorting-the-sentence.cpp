#include <iostream>
#include <string>
#include<vector>
using namespace std;

string sortSentence(string s)
{
    vector<string>ans(10);
    string temp="";
    string sentence;
    int pos;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]==' ')
      {
        pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp="";
      }
      else{
        temp+=s[i];
      }
    }
    
    if(!temp.empty())
    {
     pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp="";
    }
    
    for(int i=0;i<ans.size();i++)
    { 
       if(!ans[i].empty())
       {
         sentence+=ans[i]+" ";
       }
       
    }
    
    if(!sentence.empty())
    {
      sentence.pop_back();
    }
    return sentence;
    
}

int main()
{
    string s="is2 sentence4 This1 a3";
    
    
    
    string result = sortSentence(s);
    
    cout << result<< endl;
    
    
    
    return 0;
}
