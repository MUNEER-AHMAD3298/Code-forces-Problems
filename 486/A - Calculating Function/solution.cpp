#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int k=0;
    k=n/2;
   long long  int even_sum=k*(k+1);
   long long int odd_sum;
   if(n%2==0)
   {
       odd_sum=k*k;
   }
   else
   {
   odd_sum=(k+1)*(k+1);
   }
   long long int ans=even_sum-odd_sum;
cout<<ans<<endl;
    return 0;
}