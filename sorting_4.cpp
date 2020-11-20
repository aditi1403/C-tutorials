#include<iostream>
using namespace std;

int main()
{
    int mx=-19999999;
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
    
    return 0;
}
