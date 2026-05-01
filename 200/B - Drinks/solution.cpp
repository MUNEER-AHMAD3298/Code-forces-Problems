#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    long double ans=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans=ans+arr[i];
    }
    long double volume;
    volume=(( long double)ans)/n;
    cout<<volume<<endl;
 
    return 0;
}