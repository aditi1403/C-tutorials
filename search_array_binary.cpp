SEARCHING IN AN ARRAY-BINARY SEARCH

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n,int key)
{
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;//Why -1?
}

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Your array is as follows:"<<endl;

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

    cout<<"Your element location in the array is:"<<endl<<binarySearch(arr,n,key);
    
    return 0;
}
