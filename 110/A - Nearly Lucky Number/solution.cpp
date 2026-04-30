#include <iostream>
using namespace std;
int main() {
   long long int n;
    int luckydigits=0,digits=0,rem;
    cin>>n;
    if(n<10)
    {
        cout<<"NO"<<endl;
    }
   else
   {
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        if(rem==4||rem==7)
        {
            luckydigits++;
        }
 
    }
    if(luckydigits==4||luckydigits==7)
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