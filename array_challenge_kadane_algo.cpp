//PROB_8-->KADANE'S ALGORITHM

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
    cout<<"Your array is as follws:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int currentsum=0;
    int maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum+=arr[i];
        if (currentsum<0)
        {
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    cout<<"Your ans is as follws:"<<endl;
    cout<<maxsum<<endl;
    return 0;
}
