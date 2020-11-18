//factorial of two number

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"This is a factorial calculator!!"<<endl;
    cout<<"Enter the you first number:"<<endl;
    cin>>n;
    cout<<"Enter the second number:"<<endl;
    cin>>m;

    // int x,y;
    int x=1;
    for (int i = 1; i <=n ; i++)
    {
        x=x*i;
        
    }
    int y=1;
    for (int j = 1; j <= m; j++)
    {
        y=y*j;
        
    }
    cout<<"your first factorial value is:"<<x<<endl;
    cout<<"your second factorial value is:"<<y<<endl;
    return 0;
}
