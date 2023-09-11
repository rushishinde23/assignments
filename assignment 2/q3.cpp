#include<iostream>
using namespace std;

namespace Nstudent
{
class Student
{
    int rollno;
    string name;
    int marks;

    public:

    void initStudent(Student* ptrs)
    {
       ptrs->rollno=34;
       ptrs->name="RUSHI";
       ptrs->marks=76;

    }

    void acceptStudent(Student* ptrs)
    {
        cout<<"Enter roll no: "<<endl;
        cin>>ptrs->rollno;
        cout<<"Enter name: "<<endl;
        cin>>ptrs->name;
        cout<<"Enter marks: "<<endl;
        cin>>ptrs->marks;
    }

    void printStudent(Student* ptrs)
    {
       cout<<"Roll no. : "<<rollno<<endl;
       cout<<"Name : "<<name<<endl;
       cout<<"Marks : "<<marks<<endl;
    }

};

int menu()
{
    int ch;
    cout<<"Enter the choice"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.initStudent"<<endl;
    cout<<"2.acceptStudent"<<endl;
    cout<<"3.printStudent"<<endl;

    cin>>ch;
    return ch;

}
}

using namespace Nstudent;

int main()
{    
    Student s;
    Student *ptrs=&s;
    int choice;

    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 1:
                 s.initStudent(ptrs);
                 break;

            case 2:
                 s.acceptStudent(ptrs);
                 break;

            case 3:
                 s.printStudent(ptrs);
                 break;

            default:
                 cout<<"Entered wrong choice"<<endl;
                 break;               
        }
    }

    return 0;
}