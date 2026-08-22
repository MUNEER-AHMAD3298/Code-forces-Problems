#include <iostream>
using namespace std;
 
int main() {
   int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        string s;
        cin>>s;
        string s1=s,s2=s,s3=s;
        swap(s1[0],s1[1]);
        swap(s2[0],s2[2]);
        swap(s3[1],s3[2]);
        if (s=="abc")
            cout<<"YES"<<endl;
 
      else if (s1=="abc"||s2=="abc"||s3=="abc")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}