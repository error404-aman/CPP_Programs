//Wap in c++ to implement paramatrized constructors
#include<iostream>
#include<string>
using namespace std;
class member
{   
    int roll;
    string name;
    public:
    member(string n,int r)
    {
        roll=r;
        name=n;
    }
    void display(void);
};

void member::display()
{
    cout<<"Displaying.."<<endl;
    cout<<"Member Name "<<name<<endl;
    cout<<"Member Roll no "<<roll<<endl;
}

int main()
{
    member a1("Aman",236007);
    a1.display();
    return 0;
}