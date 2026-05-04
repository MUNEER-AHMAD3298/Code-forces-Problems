#include <iostream>
using namespace std;
int main() {
   string s;
   string t;
  cin>>s;
  cin>>t;
  int size_of_s;
  int size_of_t;
  int count=0;
  size_of_s=s.size();
  size_of_t=t.size();
  if(size_of_s!=size_of_t)
  {
      cout<<"NO";
  }
  else if(size_of_s==size_of_t)
  {
      for(int i=size_of_s-1;i>=0;i--)
  {
     if(s[i]==t[count])
     {
        count++;
     }
     
  } 
   if(count==size_of_s)
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }
 
  }
 
 
    return 0;
}