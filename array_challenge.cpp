//PROBLEM:
// you are given n array arr[] of N integers including 0.the task is to 
// find the smallest positive number mssing from the array.

// example
// 0 -9 1 3 -4 5
// here first positive missing number is 2

// base idea
// build a boolean check[] array that will depict if any elemnet x is present in the array or not
// iterate over the array and mark non-negative a[i] as true.
// given array: 0 -9 1 3 -4 5
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=0)
        {
            check[a[i]]=1;
        }
        
    }
    int ans=-1;
    for (int i = 1; i < N; i++)
    {
        if (check[i]==0)
        {
            ans=i;
            break;
        }
        
    }
    cout<<ans<<endl;

return 0;
}
