#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
     int arr[n] = {1,2,3,4,5,6,7};
      map<int,int> mp;
      for (int i = 0; i < n; i++)
      {
        mp[arr[i]]++;
        
      }
      for (auto j : mp )
      {
        cout<<j.first;
        
      }
    return 0; 
}