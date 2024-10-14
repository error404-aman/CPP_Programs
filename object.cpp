#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int per;

    void display(void);
    void input(void);
};

void student::display()
{
    cout<<"\nStudent details.."<<endl;
    cout<<"Student name: "<<name<<endl;
    cout<<"Student roll: "<<roll<<endl;
    cout<<"Student percentage"<<per<<endl;
}

void student::input()
{
    cout<<"Enter the details"<<endl;
    cout<<"Student name: ";
    cin>>name;
    cout<<"Student roll no: ";
    cin>>roll;
    cout<<"Student percentage: ";
    cin>>per;
}

int main()
{
    student s1,s2,s3;
    s1.input();
    s2.input();
    s3.input();
    s1.display();
    s2.display();
    s3.display();
    return 0;
}