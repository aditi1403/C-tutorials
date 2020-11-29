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

// CONVERT TO LOWER CASE--> M2

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter your word:"<<endl;
    getline(cin,s);

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<"Your word in lower case:"<<endl;
    cout<<s<<endl;
    return 0;
}
