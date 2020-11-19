#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
        
    return 0;
}
