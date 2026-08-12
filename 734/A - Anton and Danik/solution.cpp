#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,d=0;
    for(int i=0;i<s.size();i++)
    s[i]=='A' ? a++ : d++;
     if(a==d)
     cout<<"Friendship"<<endl;
     else if(a>d)
     cout<<"Anton"<<endl;
     else
     cout<<"Danik"<<endl;
 
    return 0;
}