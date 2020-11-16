// CHECK IF A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT
// armstrong number is number whose when eacd digit is 
// cubed and added gives the same number
// ex. 153(1+125+27=153)

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number you want to check:"<<endl;
    cin>>n;

    int sum=0;
    int originaln=n;
    while (n>0)
    {
        int lastdigit=n%10;
        sum += float(pow(lastdigit,3));
        n=n/10;
    }
    if (sum==originaln)
    {
        cout<<"This is an Armstrong number!!"<<endl;
    }
    else
    {
        cout<<"Not an armstrong number :(";
    }
    
    return 0;
}
