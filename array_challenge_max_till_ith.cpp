// PROB_1-->MAX TILL i

// #PROBLEM:
// given an array[] arr[] of size n.alignasfor every i from 0 to n-1
// output max(arr[0],arr[1],...arr[i])

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    // int mx=-19999999;
    int mx=INT_MIN;
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is as follows:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The value for max till i th term for your array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    
    return 0;
}
