#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
  long long   int a=n/5;
   long  int b=a;
    
    
    
        if(n<=5)
        {
            cout<<1;
           
        }
        else
        {
            if(n%5==0)
            {
            cout<<b;
            }
            else
            {
            cout<<b+1;
               
            }
        
        }
    
   
    return 0;
}