// POINTERS

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
    // cout<<&a<<endl;// gives address of a :)
    // cout<<aptr<<endl;
    cout<<*aptr<<endl;
    *aptr=20;
    aptr++;// will move four poits forward as one int is 4 bytes
    // so if intially value is 200 then after aptr++ it will be 204
    cout<<a<<endl;

    char ch='a';
    char*cptr=&ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    return 0;
}
