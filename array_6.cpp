#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int currsum[n+1];
    currsum[0]=0;
    
    for (int i = 1; i <= n; i++)
    {
        currsum[i]=currsum[i-1]+arr[i-1];
    }
    int maxSum=INT_MIN;
    for (int i = 1; i <=n;i++)
    {
        int sum=0;
        for (int j = 0; j < i; j++)
        {
            sum=currsum[i]-currsum[j];
            maxSum=max(sum, maxSum);
        }
        
    }
    cout<<maxSum;

return 0;
}
