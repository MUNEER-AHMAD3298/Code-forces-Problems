#include <iostream>
using namespace std;
int main() {
    int uppercase=0,lowercase=0,size;
string s,t;
cin>>s;
size=s.size();
for(int i=0;i<size;i++)
{
    
    
    if(s[i]>='a'&&s[i]<='z')
    {
    lowercase++;
    }
    else
    {
        uppercase++;
    }
}
 
 
if(uppercase>lowercase)
{
    for(int i=0;i<size;i++)
    {
    t=toupper(s[i]);
    cout<<t;
    }
}
else
{
    for(int i=0;i<size;i++)
    {
t=tolower(s[i]);
    cout<<t;
    }
}
    return 0;
}