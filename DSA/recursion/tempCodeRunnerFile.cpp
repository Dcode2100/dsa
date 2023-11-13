#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;  
	cin>>T;
    
    
	while(T--){
	int a,b;
	cin>>a>>b;
    int mini;
	while(a<=50 && b<=50){
	   mini = min(a,b);
       if(mini*2 == max(a,b)) cout<<"yes";
       else "NO";
	}
  }
} 
