#include <iostream>
using namespace std;
int main() {
   int y;
   cin>>y;
   int a;
   int r1,r2,r3,r4;
    int n1,n2,n3,n4;
   for(int i=0;i<1000;i++)
{
    y=y+1;
    a=y;
    r1=y%10;
    n1=y/10;
    r2=n1%10;
    n2=n1/10;
    r3=n2%10;
    n3=n2/10;
    r4=n3%10;
    n4=n3/10;
    if(r1!=r2&&r1!=r3&&r1!=r4&&r2!=r3&&r2!=r4&&r3!=r4)
    {
        cout<<a;
       return 0;
    }
    
}
    return 0;
}