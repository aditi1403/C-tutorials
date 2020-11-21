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
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
    

return 0;
}
