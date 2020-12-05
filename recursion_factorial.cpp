// RECURSION-FACTORIAL OF A NUMBER
#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    
    int prevfact=factorial(n-1);
    return n*prevfact;
}

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Your ans is as follws:"<<endl;
    cout<<factorial(n)<<endl;
    return 0;
}
