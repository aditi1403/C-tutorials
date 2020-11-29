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

// STRING CHALLENGE(#3)--> FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING
/* EXAMPLE: "53214"---->"54321"*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"Enter you numeric string:"<<endl;
    getline(cin,s);

    sort(s.begin(),s.end(),greater<int>());
    
    cout<<"The largest number formed from your numeric string is as follows:"<<endl;
    cout<<s<<endl;
    return 0;
}
