// Factorial calculator_func
#include<iostream>
using namespace std;

int fact(int n)
    {
        int factorial=1;
        for (int i = 1; i <=n; i++)
        {
            factorial*=i;
        }
        return factorial;
    }

int main(){
    int n;
    cout<<"Enter you number:"<<endl;
    cin>>n;

    cout<<"The factorial of the number is:"<<endl;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}
