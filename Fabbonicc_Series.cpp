//Wap in c++ to print the fibonacci series to 10 number
#include<iostream>
using namespace std;
int main()
{
    int n,sv=1,sd=1;
    cout<<"Fibbonicc Series"<<endl;
    cout<<"0 1 ";
    for(int i=1;i<10;i++)
    {
        cout<<sv<<" ";
        n=sv+sd;
        sd=sv;
        sv=n;

    }
    return 0;
}