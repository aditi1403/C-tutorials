// Value of nCr_Func
#include<iostream>
using namespace std;

int fact(int n)
    {
        int factorial=1;
        for (int i = 1; i <= n; i++)
        {
            factorial*=i;
        }
        return factorial;
    }

int main(){
    int n,r;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;

    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<"The value of nCr is:"<<endl;
    cout<<ans<<endl;

    return 0;
}
