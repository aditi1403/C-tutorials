// 2-DIMENSIONAL ARRAY
/* Will be used in:
    1.Graphs
    2.Dynamic programming */

// 2-D_CHALLENGES(#1)--> MATRIX TRANSPOSE
/* Problem:
    Given a square matrix A & its number f rows(or columns) N,
    return the transpose of A.
    The transpose of a matrix is the matrix flipped over it's main 
    diagonal, switching the row and column indices of the matrix.

    Constraints:
    1<=N<=1000
*/

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of m:"<<endl;
    cin>>m;
    int A[n][m];
    cout<<"Enter the elements of the matrix:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Your matrix is as follows:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i <n ; i++)
    {
        for (int j = i; j < n; j++)
        {
            // swap
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    // print
    cout<<"Your transpose of the matrix is as follows:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
