#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a;
        vector<int>v;
        map<int,int>mp;

        for(int i=0; i<a; i++){
            cin>>b;
            v.push_back(b);
        }
        for(int i=0; i<a; i++){
            mp[v[i]]++;
        }
        vector<int>v2;
        for(auto i:mp){
               v2.push_back(i.second);
        }
        int e=0;
        for(int i = 0; i<v2.size();i++){
            if(v2[i] > e) e = v2[i];
            }      
            if(count(v2.begin(),v2.end(),e)>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

    }
}