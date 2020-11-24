// PRINTING SUBARRAY & THE SUM

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
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
    int curr=0;
    cout<<"Subarrays:"<<endl;
    for (int i = 0; i < n; i++)
    {
        curr=0;
        for (int j = i; j < n; j++)
        {
            curr+=arr[j];
            cout<<arr[j]<<endl;//to print the subarrays
            // cout<<curr<<endl;// to print the sum of the subarrays
        }
    }
    return 0;
}
