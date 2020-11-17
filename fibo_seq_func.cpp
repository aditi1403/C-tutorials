// Fibonacci Sequence_Func
#include<iostream>
using namespace std;

void fib(int n)
    {
        int t1=0;
        int t2=1;
        int nextTerm;

        for (int i = 1; i <= n; i++)
        {
            cout<<t1<<endl;
            nextTerm=t1+t2;
            t1=t2;
            t2=nextTerm;
        }
        return;
    }


int main(){
    int n;
    cout<<"Enter the number of terms you want to print:"<<endl;
    cin>>n;
    cout<<"Your fibonacci sequence:"<<endl;
    fib(n);

    return 0;
}
