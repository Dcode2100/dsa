// #include<iostream>

// using namespace std;

// int main()
// {
//     int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//     int k = 5;
    

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if ( a[i][j] == k)  
//             {
//                 cout<< i <<" "<< j;
//             }            
//         }                
//     }
//     return 0; 
// }


// 2nd approch  - binary
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    int target = 5;
   
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0, r = m * n - 1;
    while (l != r){
        int mid = (l + r - 1) / 2;
        if (matrix[mid / m][mid % m] < target)
            l = mid + 1;
        else 
            r = mid;
    }
    if( matrix[r / m][r % m] == target )
        cout<<"true";
    else
        cout<< " false ";
}
