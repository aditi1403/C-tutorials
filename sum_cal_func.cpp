// #include<iostream>
// using namespace std;

// int main(){

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int ans=0;
    for (int i = 0; i <=n ; i++)
    {
        ans*=1;
    }
    return ans;
}

int32_t main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    cout<<sum(n)<<endl;
    
}
