#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enetr the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enetr the elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
                // cout<<arr[k]<<" ";
            }
            // cout<<endl;
            maxSum=max(maxSum,sum);
        }
        
    }
    cout<<maxSum<<endl;

return 0;
}
