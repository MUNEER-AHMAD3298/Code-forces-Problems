#include <iostream>
#include <string>
using namespace std;
int main() {
    string s,t;
    cin>>s>>t;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[i])
        ans.push_back('0');
        else
        ans.push_back('1');
    }
    cout<<ans<<endl;
   
 
    return 0;
}