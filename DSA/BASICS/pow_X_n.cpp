// #include<bits/stdc++.h>
// using namespace std;

// double pow(int p, int n){
//     double ans = 1;
//     for(int i = 0; i < n; i++){
//         ans = ans * p;
//     }
//     return ans;
// }
// int main(){
//   cout<<"The power is "<<pow(4,5);
// }

// second approch - Using binary exponentiation.

#include<bits/stdc++.h>

using namespace std;
double myPow(double x, int n) {
  double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
}

int main() {
  cout << myPow(2, 10) << endl;
}