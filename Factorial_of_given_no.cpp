//Wap to find factorial of given number
#include<iostream>
using namespace std;
int main()
{
    int n,i,fac=1;
    cout<<"Enter the no"<<endl;
    cin>>n;
    cout<<"Factorial of the no"<<endl;
    for(i=n;i>1;i--)
    {
        cout<<i<<" ";
        fac=fac*i;
    }
    cout<<"= "<<fac<<endl;
    return 0;
}
