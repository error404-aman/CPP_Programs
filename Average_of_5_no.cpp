//Wap to print average of 5 number
#include<iostream>
using namespace std;
int main()
{
    int n[5],sum=0;
    cout<<"Enter 5 Nos."<<endl;
    for(int i=0;i<5;i++)
        cin>>n[i];
    for(int i=0;i<5;i++)
        sum=sum+n[i];
    cout<<"Average of the given Nos. are :"<<sum/5;
    return 0;
}