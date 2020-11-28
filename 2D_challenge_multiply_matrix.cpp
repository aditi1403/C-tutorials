// 2-DIMENSIONAL ARRAY
/* Will be used in:
    1.Graphs
    2.Dynamic programming */

// 2-D_CHALLENGES(#2)--> MATRIX MULTIPLICATION
/* will help in topics like-->MATIRX EXPONENTIATION
    Problem:
        Given two 2-Dimensional arrays of size n1Xn2 and n2Xn3. Your
        task is to multiply these matrices and output the multiplied 
        matrux.

    Constraints:
        1<=n1,n2,n3<=300
*/

#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter the value of n1, n2 and n3 respectively:"<<endl;
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];
    cout<<"Enter matrix 1:"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"Enter matrix 2:"<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>m2[i][j];
        }
    }
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j]=0;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    cout<<"The ans we get on multiplying both these matrices is as follows:"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
