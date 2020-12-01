// BIT MANIPULATION--> GET BIT
/*This function tells us how to use get bit function*/

#include<iostream>
using namespace std;


    int getBit(int n, int pos)
    {
      return ((n & (1<<pos))!=0);
    }
    
    int main()
    {
      cout<<getBit(5,2)<<endl;
   
    return 0;
}
