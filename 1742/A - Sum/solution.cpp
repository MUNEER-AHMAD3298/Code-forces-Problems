#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
       int a,b,c;
      cin>>a>>b>>c;
      if(b+c==a)
      {
          cout<<"YES"<<endl;
      }
     else if(a+c==b)
      {
          cout<<"YES"<<endl;
      }
      else if(a+b==c)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
  }
   
 
    return 0;
}