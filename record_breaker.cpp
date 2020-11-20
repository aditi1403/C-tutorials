// PROBLEM:
// Isyana is given the number of visitors at her local theme park on 
// N consecutive days. the number of visitors on the i-th day is Vi. A
// day is record breaking if it satisfies both of the following conditions:
// * the number of visitors on the day is strictly larger than the number
// of visitors on each of the previous days.
// * either it is the last day, or the numer of visitors on the day is
// strictly larger than the number of visitors on the following day.
// note that the very first day could be a record breaking day!
// please help Isyana find out the number of record breaking days.

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    int a[n+1];
    a[n]=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if (n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
return 0;
}
