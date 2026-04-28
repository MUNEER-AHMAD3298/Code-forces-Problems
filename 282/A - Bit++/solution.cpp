#include <iostream>
using namespace std;
int main() {
   int x=0;
  int num;
  cin>>num;
   for(int i=0;i<num;i++)
   {
       string operation;
       cin>>operation;
       if(operation=="++X"||operation=="X++")
       {
           x++;
       }
       else
       {
           x--;
       }
   }
   cout<<x;
 
    return 0;
}