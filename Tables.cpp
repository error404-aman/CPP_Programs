//Wap in c++ to print the table
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    cout<<"Tables:"<<endl;
    for(int i=1;i<11;i++)
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    return 0;
}