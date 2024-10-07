//Wap to print half pyramid
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no. of Lines"<<endl;
    cin>>n;
    cout<<"Half Pyramid"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
