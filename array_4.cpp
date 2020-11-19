#include<iostream>
using namespace std;

int binarySearch(int arr[],int ,int key)
    {
        int s=0;
        int e=n;
        while(s<=e)
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
        }
    }
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int key;
    cin>>key;
    return 0;
}
