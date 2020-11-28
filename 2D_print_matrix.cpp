// 2-DIMENSIONAL ARRAY
/* Will be used in:
     1.Graphs
     2.Dynamic programming */

 // PRINTING A MATRIX

 #include<iostream>
 using namespace std;

 int main(){
     int n,m;
     cout<<"Enter the value of n(rows):"<<endl;
     cin>>n;
     cout<<"Enter the value of m(columns):"<<endl;
     cin>>m;
     int arr[n][m];
     cout<<"Enter the elements of each row of the matrix:"<<endl;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             cin>>arr[i][j];
         }
     }
     cout<<"Your matrix is as follows:"<<endl;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     cout<<endl;
     return 0;
 }
