#include <iostream>
using namespace std;
 
int main() {
  string s;
  cin>>s;
  bool arr[26]={0};
  int count=0;
  for(int i=0;i<s.size();i++)
  {
    if(arr[s[i]-'a']!=1)
    {
        count++;
        arr[(s[i]-'a')]=1;
    }
  }
  if(count%2==0)
  {
    cout<<"CHAT WITH HER!"<<endl;
  }
  else
  {
    cout<<"IGNORE HIM!"<<endl;
  }
 
    return 0;
}