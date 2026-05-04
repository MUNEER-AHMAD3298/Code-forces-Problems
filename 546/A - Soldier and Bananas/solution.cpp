#include <iostream>
using namespace std;
int main() {
 int k,n,w;
 cin>>k>>n>>w;
 long long int ans=0;
 if(w==1)
 {
   for(int i=0;i<=w;i++)
 {
    ans=ans+i*k; 
 }  
 cout<<ans-w<<endl;
 }
 else
 {
 
 for(int i=0;i<=w;i++)
 {
    ans=ans+i*k; 
 }
 if(ans<n)
 {
     cout<<"0";
 }
 else
 {
 ans=ans-n;
 cout<<ans<<endl;
 }
 }
    return 0;
}