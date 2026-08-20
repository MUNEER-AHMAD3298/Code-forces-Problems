#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        if (s.size() != 5) {
            cout << "NO" << endl;
        }
        else
        {
            int count_T = 0, count_i = 0, count_m = 0, count_u = 0, count_r = 0;
 
            for (int j = 0; j < n; j++) {
                if (s[j] == 'T') count_T++;
                else if (s[j] == 'i') count_i++;
                else if (s[j] == 'm') count_m++;
                else if (s[j] == 'u') count_u++;
                else if (s[j] == 'r') count_r++;
            }
 
            if (count_T == 1 && count_i == 1 && count_m == 1 && count_u == 1 && count_r == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}