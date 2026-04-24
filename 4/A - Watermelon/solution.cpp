#include <iostream>
using namespace std;
int main() {
   int input;
   cin>>input;
   int end;
   int j=input;
   int k=0;
    int arr[(input/2)-1];
    int arr1[(input/2)-1];
    end=(input/2)-1;
   if(input%2==1)
   {
       cout<<"NO";
       return 0;
   }
   else
   if(input==2)
   {
   cout<<"NO";
   }
   else
   {
   {
       for(int i=0;i<=end;i++)
   {
       j=j-2;
       arr[i]=j;
   }
    
       for(int i=0;i<=end;i++)
   {
       k=k+2;
       arr1[i]=k;
   }
    for(int i=0;i<end;i++)
    {
        if((arr[i]+arr1[i])==input)
        {
            cout<<"YES";
            break;
        }
       
       
    }
   
   }
   }
 
    return 0;
}