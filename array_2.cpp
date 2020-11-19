#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enetr the value of n:"<<endl;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        //maxNo=max(maxNo,arr[i]);....this line is enough for the first if loop
        if (arr[i]>maxNo)
        {
            maxNo=arr[i];
        }
        //minNo=min(minNo,arr[i]);....this line is enough for the second if loop
        if (arr[i]<minNo)
        {
            minNo=arr[i];
        }
    }
    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
}
