#include <iostream>
using namespace std;
int main() {
 int t;
    cin>>t;
    for (int i=1;i<=t;i++) {
        char name;
        cin>>name;
        if (name == 'c' || name == 'o' || name == 'd' || name == 'e' ||
       name == 'f' || name == 'r' || name == 's') {
            cout << "YES" << endl;
       } else
           cout << "NO" << endl;
    }
 
   return 0;
}
 