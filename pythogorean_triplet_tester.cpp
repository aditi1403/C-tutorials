#include<bits/stdc++.h>

using namespace std;

bool check(int x, int y, int z)
{
    int a=max(x,max(y,z));
    int b,c;

    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if (a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
        
}

int32_t main()
{
    int x,y,z;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    cout<<"Enter the value of y:"<<endl;
    cin>>y;
    cout<<"Enter the value of z:"<<endl;
    cin>>z;

    if (check (x,y,z))
    {
        cout<<"It is a pythagorean triplet"<<endl;
    }
    else
    {
        cout<<"It is not a pythagorean triplet"<<endl;
    }
    
}
