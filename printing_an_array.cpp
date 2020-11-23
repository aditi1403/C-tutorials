PRINTING AN ARRAY :)

#include<iostream>
using namespace std;

int main(){
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
    
    return 0;
}
