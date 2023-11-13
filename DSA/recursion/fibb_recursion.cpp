#include<iostream>

using namespace std;

int fibbof(int n){
    if(n == 0 || n==1) return n;

    return fibbof(n-1) + fibbof(n-2);
}
int main()
{
    int n = 0;
    cout<<"Enter the Nth index ";
    cin>>n;
    cout<<fibbof(n)<<endl;
}