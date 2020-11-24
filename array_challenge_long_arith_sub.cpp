// PROB_2--> LONGEST ARITHMETIC SUBARRAY
/* An arithmetic array is an array that contains at least two integers and the 
differences between consecutive integers are equal. for example,[9,10],[3,3,3]
,and[9,7,5,3] are arithmetic arrays, whle[1,3,3,7],[2,1,2]*, and [1,2,4] are not
arithmetic arrays.

sarasvati has an array of N non-negtive integers. The i-th integer of the array 
Ai. She wants to choose a contiguous arithmetic subarray from her array that has 
the maximum length. Please help her to determine the length of the longest 
contigous arithmetic subarray. */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
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
    cout<<endl;
    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int curr=2;
    while (j<n)
    {
        if (pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"Your maximum subarray length is as follows:"<<endl;
    cout<<ans<<endl;
    return 0;
}
