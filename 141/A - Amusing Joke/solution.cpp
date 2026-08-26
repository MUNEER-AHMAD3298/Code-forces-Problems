#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   string a,b,c;
   cin>>a>>b>>c;
   bool flag=true;
   int array[26]={0};
   int arr[26]={0};
    for(int i=0;i<a.size();i++)
      array[a[i]-65]++;
   for(int i=0;i<b.size();i++)
      array[b[i]-65]++;
   for(int i=0;i<c.size();i++)
      arr[c[i]-65]++;
   for(int i=0;i<26;i++) {
      if (array[i]!=arr[i]) {
         cout<<"NO"<<endl;
         flag=false;
         break;
      }
   }
   if (flag==true)
      cout<<"YES"<<endl;
   return 0;
}