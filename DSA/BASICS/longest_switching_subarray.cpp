// find the length of the longest switching contiguous subarray.
// An array is called Switching if all the elements at even indices are equal and all the elements at odd indices are also equal.
/* If the given 'ARR' is [1, 4, 1, 4, 3, 2, 3, 0]. Then {1, 4, 1, 4}, {3, 2, 3}, {3, 0}, {0} 
   are some of the switching subarrays. But {1, 4, 3}, {1, 4, 1, 4, 3, 2, 3} are not.
   therefore the max is 3 


*/

#include<iostream>

using namespace std;

int switchingSubarray(int arr[], int n) {

   int start = 0, end = 0, result = 0;
   while(end < n){
       if(end > 1 && arr[end] != arr[end-2]){
           start = end-1;
       }
       end++;
       result = max(result, end - start);
   }
   return result;
}
int main()
{
    int a[] = {1,4,1,4,2,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<switchingSubarray(a,n);

    
    return 0; 
}
