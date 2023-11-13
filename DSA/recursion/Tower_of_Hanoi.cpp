// Count number of steps to transfer the hanoi from one stack to another 
// Hint by using buffer we can do this and create a formula out of it.
#include<bits/stdc++.h>
using namespace std;

// f(n) = f(n - 1) + 1 + f(n - 1)

// time and space O(n)
int f(int n) {
    
    if (n == 1) { return 1; }
    
    return 2 * f(n - 1) + 1; //  Formula
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        cout<<f(n)<<endl;
    }
}