#include<iostream>
using namespace std;

int main(){

    int row,col;
    cout<<"Enter the number of rows you want:"<<endl;
    cin>>row;
    cout<<"Enter the number of columns you want:"<<endl;
    cin>>col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; i <= col; i++)
        {
            if (i==1 || i==row || j==1 || j== col)            {
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
