#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high);
void quicksort(vector<int> &arr,int low,int high);

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr)
{
    
	quicksort(arr,0,arr.size()-1);
    return arr;
}
void quicksort(vector<int> &arr,int low,int high)
{
    if(low<high)
    { int pivot=partition(arr,low,high);
     quicksort(arr,low,pivot-1);
     quicksort(arr,pivot+1,high);}
}
int partition(vector<int> &arr,int low,int high){
    
    int i=low;
    int j=high;
    int pivot=arr[low];
    
    while(I< j){
        for(int i = 0; i < n )
    }
    while(i<j)
    {
        while(arr[i]<=pivot)
    {
        i++;
     }
    while(arr[j]>pivot)
    {
        j--;
     }
    if(i<j){
        swap(arr[i],arr[j]);
    }
   }
    swap(arr[low],arr[j]);
    return j;
}