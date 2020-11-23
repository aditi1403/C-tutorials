PRINTING MIN & MAX NUMBER IN AN ARRAY

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    
    cout<<"Your array is as follows:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Your maximum element in the array is:"<<endl<<maxNo<<endl;
    cout<<"Your minimum element in the array is:"<<endl<<minNo<<endl;
    
    return 0;
}
