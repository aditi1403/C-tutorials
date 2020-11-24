// PROB_5--> SUBARRAY WITH GIVEN SUM
/* given an unsorted array A of size N of non-negaive integers, find a continuous
subarray which adds to a given number S.*/
/*constraints: 
#1<=N<=10^5
0<=Ai<=10^10
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int s;
    cout<<"Enter the value of s:"<<endl;
    cin>>s;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is as follows:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int i=0,j=0,st=-1,en=-1, sum=0;
    while (j<n && sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    }
    if (sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
    }
    while (j<n)
    {
        sum+=arr[j];
        while (sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if (sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<endl;
    cout<<"THe ans is as follows:"<<endl;
    cout<<st<<" "<<en<<endl;
    return 0;
}
