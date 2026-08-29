#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
   int t;
    cin>>t;
    for (int i=1;i<=t;i++) {
        long long int n;
        cin>>n;
        vector<int>v(n);
        for (auto &elements:v)
            cin>>elements;
        int common;
        if (v[0] == v[1]) {
            common = v[0];
        } else {
            common = v[2];
        }
 
        for (int j = 0; j < v.size(); j++) {
            if (v[j] != common) {
                cout << j + 1 << "
";
                break;
            }
        }
    }
    return 0;
}