SEARCHING IN AN ARRAY-LINEAR SEARCH

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1; // why -1?
}

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
    
    cout<<"Your array is as follows:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter the element you want to search:"<<endl;
    cin>>key;

    cout<<"Your element location in the array is:"<<endl<<linearSearch(arr,n,key);

    return 0;
}
