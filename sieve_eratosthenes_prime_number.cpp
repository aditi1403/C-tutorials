// SIEVE OF ERATOSTHENES
#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100]={0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]==0)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                prime[i]=1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    primeSieve(n);
    return 0;
}
