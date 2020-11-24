// PROB_4--> FIRST REPEATING ELEMENT
/* Given an array arr[] of size N.The task is to find the first repeating element in
the array of integers, i.e., an element that occurs more than once and whose index
of first occurence is smallest.*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
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
    const int N=1e6+2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] !=-1)
        {
            minidx=min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
        
    }
    if (minidx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx+1<<endl;
    }
    
    return 0;
}
