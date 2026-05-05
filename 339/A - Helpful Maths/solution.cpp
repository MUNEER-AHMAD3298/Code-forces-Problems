#include <iostream>
using namespace std;
int main() {
  string s;
  cin>>s;
  int count1=0,count2=0,count3=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='1')
      {
          count1++;
      }
       if(s[i]=='2')
      {
          count2++;
      }
       if(s[i]=='3')
      {
          count3++;
      }
  }
  int a=0;
  int b=0;
  for(int a=0;a<=(2*count1)-1;a+=2)
  {
      s[a]='1';
      
  }
  b=2*count1;
  int c;
  for(int c=b;c<=(2*count1+2*count2)-1;c+=2)
  {
      s[c]='2';
  }
  int d=2*(count1+count2);
  for(int e=d;e<=s.size()-1;e+=2)
  {
      s[e]='3';
  }
cout<<s<<" ";
    return 0;
}