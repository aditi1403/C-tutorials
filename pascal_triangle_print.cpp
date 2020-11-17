// Printing the pascal trialngle:_func
//    1(0C0)
//    1(1C0) 1(1C1)
//    1(2C0) 2(2C1) 1(2C2)
//    1(3C0) 3(3C1) 3(3C2) 1(3C3)
//    1(4C0) 4(4C1) 6(4C2) 4(4C3) 1(4C4)
//    ....
//    t(ij)=iCj
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
    int n;
    cout<<"Enter the number of rows you want to print:"<<endl;
    cin>>n;
    
    cout<<"Yor pascal triangle:"<<endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
