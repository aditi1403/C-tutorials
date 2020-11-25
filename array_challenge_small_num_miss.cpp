// PROB_5-->SMALLEST POSITIVE MISSING NUMBER

#include<iostream>
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
    const int N=1e6+2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i]=false;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=0)
        {
            check[arr[i]]=1;
        }
    }
    int ans=-1;
    for (int i = 1; i < N; i++)
    {
        if (check[i]==false)
        {
            ans=i;
            break;
        }
        
    }
    cout<<"Your ans is as follows:"<<endl;
    cout<<ans<<endl;
    return 0;
}
