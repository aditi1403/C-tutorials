// PROB_6-->ALL POSSIBLEE SUBARRAY 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is as follws:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k= i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
