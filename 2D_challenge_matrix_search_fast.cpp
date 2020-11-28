// 2-DIMENSIONAL ARRAY
/* Will be used in:
    1.Graphs
    2.Dynamic programming */

// 2-D_CHALLENGES(#3)--> MATRIX SEARCH(faster way)
/* Problem:
        Gven a nxm matrix.
        Write an algorith to find that the given value exists in the matrix
        or not.
        Integers in each row are sorted in ascending from left to right.
        Integers in each column are sorted in ascending from top to
        bottom.
*/
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of m:"<<endl;
    cin>>m;
    int target;
    cout<<"Enter the value of target:"<<endl;
    cin>>target;
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
    int r=0 ,c=m-1;
    bool found=false;
    while (r<n and c>=0)
    {
        if (A[r][c]== target)
        {
            found=true;
        }
        if (A[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout<<"Element found! :)"<<endl;
    }
    else
    {
        cout<<"Element does not exist! :("<<endl;
    }
    
    return 0;
}
