#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
        cin>>N;
	    int A[N];
	    for(int i = 0; i < N - 1; i++) cin>>A[i];
	    map<int,int> mp;
	    for(int i = 0; i < N - 1; i++){
	        mp[A[i]]++;
	    }
	    int maxi = 0;
	    for(auto &it: mp){
	        maxi = max(maxi,it.second);
            int a;
            for(auto &it: mp){
                if(maxi != it.second);
                a = 1;
            }
            if(a = 0)cout<<"YES";
            else cout<<"NO";
        }
	}
	
}