#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// set function stores value in the form of sorted array.
int main()
{
    int n = 8;
     int arr[n] = {7,6,5,4,3,2,1};
      set<int> set;
      for (int i = 0; i < n - 1 ; i++)
      {
        set.insert(arr[i]);
        
      }
      for (auto i : set )
      {
        cout<<i;
        
      }
    return 0; 
}