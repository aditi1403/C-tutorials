// PROB_9-->MAXIMUM CIRCULAR SUBARRAY SUM

#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n)
{
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
    return maxsum;
}

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
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadane(arr,n);
    int totalsum=0;
    for (int i = 0; i < n; i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum + kadane(arr,n);
    cout<<"Your ans is as follows:"<<endl;
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}
