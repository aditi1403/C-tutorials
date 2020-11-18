//CHECK WHETHER PRIME OR NOT?
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"This is a prime number tester!!"<<endl;
    cout<<"Enter the number you want to test:"<<endl;
    cin>>n;

    bool flag=0;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"This is a Non-Pirme"<<endl;
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        cout<<"This is a Prime number!!"<<endl;
    }
    
    return 0;
}
