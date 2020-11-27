// CHECK PALINDROME
/* check if the enterd word is a palindrome or not */
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check=1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if (check==true)
    {
        cout<<"Word is a palindrome"<<endl;
    }
    else
    {
        cout<<"Word is not a palindrome"<<endl;
    }
    
    return 0;
}
