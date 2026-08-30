#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main() {
   int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v(26,0);
    for (int i=0;i<n;i++) {
        s[i]=tolower(s[i]);
        v[s[i]-'a']++;
    }
    for (int i=0;i<26;i++) {
       if (v[i]==0) {
           cout<<"NO"<<endl;
           return 0;
       }
    }
    cout<<"YES"<<endl;
 
    return 0;
}