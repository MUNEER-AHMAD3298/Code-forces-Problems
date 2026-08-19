#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int  n,k;
    cin>>n>>k;
    int remain=240-k;
    int problem_min=0;
    int count=0;
    for (int i=1;i<=n;i++) {
        problem_min+=i*5;
        if (problem_min<=remain)
            count++;
    }
    cout<<count<<endl;
 
    return EXIT_SUCCESS;
}