#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++)
        cin>>v[i];
 
    long long int sum1=0,sum2=0;
    int left = 0, right = n - 1;
    for (int i=0;i<n;i++) {
        int pick;
        if (v[left] > v[right]) {
            pick = v[left];
            left++;
        } else {
            pick = v[right];
            right--;
        }
 
        if (i%2==0)
            sum1+=pick;
        else
            sum2+=pick;
    }
    cout<<sum1<<" "<<sum2<<endl;
 
    return 0;
}