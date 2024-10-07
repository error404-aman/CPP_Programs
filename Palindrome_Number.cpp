//Wap to check palindrome number
#include<iostream>
using namespace std;
int main()
{
    int n1,rev=0,rem=0,n2,n3,len;
    string l;
    cout<<"Enter the No"<<endl;
    cin>>n1;
    n2=n1;
    n3=n2;
    l=to_string(n1);
    for(int i=0;i<l.size();i++)
    {
        rev=n2%10;
        rem=rem*10+rev;
        n2=n2/10;
    }
    if(rem==n3)
        cout<<"Palindrome No."<<endl;
    else
        cout<<"Not Palindrome No."<<endl;
    return 0;
}