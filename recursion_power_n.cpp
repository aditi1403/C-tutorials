// RECURSION-RAISED TO THE POWER N
/*this program tells us the value of n^p*/
#include<iostream>
using namespace std;

int power(int n, int p)
{
    if (p==0)
    {
        return 1;
    }
    int prevPower= power(n,p-1);
    {
    return n*prevPower;
    }
}

int main()
{
    int n,p;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of p:"<<endl;
    cin>>p;
    cout<<"The value of n^p is:"<<endl;
    cout<<power(n,p)<<endl;
    return 0;
}
