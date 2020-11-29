// STRINGS V/S CHARACHTER ARRAYS
/* CHARACHTER ARRAYS:+ Need to know size beforehand.
                     + Larger size required for operations
                       (concatenate or append).
                     + No terminating extra character.
   STRINGS:+ No need to know size beforehand.
           + Performing operations ike concatenation 
             & append is easier.
           + Terminated with a special character '\0'.
*/

// STRING CHALLENGE(#2)--> convert to lower case

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the word:"<<endl;
    getline(cin,str);
    
    // convert to lower case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<"Your word has been converted to lower case"<<endl;
    cout<<str<<endl;

return 0;
}
