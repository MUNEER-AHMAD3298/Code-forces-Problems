#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        long long int a,b;
        cin>>a>>b;
       if (a%b==0)
           cout<<"0"<<endl;
        else {
            if (a>b) {
                int q=a/b;
                int ans=((q+1)*b)-a;
                cout<<ans<<endl;
            }
 
            else
                cout<<b-a<<endl;
        }
    }
    return EXIT_SUCCESS;
}