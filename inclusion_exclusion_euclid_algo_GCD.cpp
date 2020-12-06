//EUCLID ALGORITH TO FIND GCD
/*this file tells us how euclid's algorithm works*/
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"Your ans is as follows:"<<endl;
    cout<<gcd(a,b)<<endl;
    return 0;
}
