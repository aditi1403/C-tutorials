// PROB_3-->RECORD BREAKER
/* Isyana is given the number of visitors at her local theme park on N consecutives
days.The number of visitors on the i-th day is Vi. A day is record breaking if it
satisfies both of the following conditions:

# The number of visitors on the day is strictly larger than the number of visitors on
each of the previous day.
# Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.

Note that the very first day could be a record breaking day!

please help Isyana find out the number of record breaking days.*/

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
    if (n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<"THe number of record breaking days are as follows:"<<endl;
    cout<<ans<<endl;
    return 0;
}
