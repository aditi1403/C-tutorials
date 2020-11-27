// LARGEST WORD IN A SENTENCE
/* to find the largest word in a sentence */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the sentence:"<<endl;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int currlen=0, maxlen=0;
    int st=0, maxst=0;

    while (1)
    {
        if (arr[i]==' '|| arr[i]=='\0')
        {
            if (currlen>maxlen)
            {
                maxlen=currlen;
                maxst= st;
            }
            currlen=0;
            st=i+1;
        }
        else
        {
            currlen++;
        }
        if (arr[i]=='\0')
        {
            break;
        }
            i++;
    }
    cout<<"The longest word location is:"<<endl;
    cout<<maxlen<<endl;
    cout<<"The longest word is:"<<endl;
    for (int i = 0; i < maxlen; i++)
    {
        cout<<arr[i+maxst];
    }
    
    return 0;
}
