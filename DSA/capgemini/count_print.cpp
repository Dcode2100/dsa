/* Example output of an input array
   1 occurs 3 times
   2 occurs 2 times
*/
#include<bits/stdc++.h>
using namespace std;

int print(int arr[],int length){
    int i,j,count;
    int arr1[length];
    for (int i = 0; i < length; i++)
    {
        count = 0;
        for (j = 0; j < length; j++)
        {
            if(arr[i] == arr[j]) count++;  
        }
        pair<int,int>p;
        if(count == 1){
            p[i] 
        }
        
        cout<<arr[i]<<" occurs "<<count<<" times "<<endl;
    }
    

}
int main()
{
    int len;
    cout<<"enter the length of an array ";
    cin>>len;
    int arr[len];

    for(int i = 0; i < len; i++){
        cin>>arr[i];
    }  
    
    print(arr,len);

    return 0; 
}