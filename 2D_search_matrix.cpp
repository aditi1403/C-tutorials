// 2-DIMENSIONAL ARRAY
/* Will be used in:
    1.Graphs
    2.Dynamic programming */

// SEARCHING IN MATRIX

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the value of n(rows):"<<endl;
    cin>>n;
    cout<<"Enter the value of m(columns):"<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of the mtrix:"<<endl;
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
    int x;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    cout<<"Location of element:"<<endl;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if (flag)
    {
        cout<<"Element is found! :) "<<endl;
    }
    else
    {
        cout<<"Element is not found! :("<<endl;
    }
    cout<<endl;
    return 0;
}
