#include<bits/stdc++.h>

using namespace std;

char math(char str[],int length){
    
    int i,j,k = 0,count;
    char str1[100];
    for(i = 0; str[i] != '\0'; i++){
        count = 0;
        for(j = 0; j < i; j++){
            if(str[i] == str[j])
            count++;
        }
        if(count==1){
        str1[k] = str[i];
        k++;
        }
    }
    for(i=0; i<k; i++){
        count = 0;
        for(j=0; str[j]!='\0'; j++){
            if(str1[i]==str[j]){
            count++;
            }
        }
        if(count == 1){
            cout<<str1[i];
        }
        else cout<<str1<<count;
    }
    
}

int main()
{
    cout<<"Enter the string ";
    char a[100],len;
    cin>>a;
    len = strlen(a);   
    math(a,len);
    return 0; 
}