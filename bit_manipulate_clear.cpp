// BIT MANIPULATION-CLEAR BIT
/*This function tells us the usage of clear bit function.*/

#include<iostream>
using namespace std;


    int getBit(int n, int pos)
    {
      return ((n & (1<<pos))!=0);
    }

    int setBit(int n, int pos)
    {
      return (n | (1<<pos));
    }

    int clearBit( int n, int pos)
    {
      int mask= ~(1<<pos);
      return (n& mask);
    }

    int main()
    {
      // cout<<getBit(5,2)<<endl;
      // cout<<setBit(5,1)<<endl;
      cout<<clearBit(5,2)<<endl;
    
      return 0;
}
