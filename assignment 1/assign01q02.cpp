#include<iostream>
using namespace std;

class Date
{
  int day;
  int month;
  int year;

public :
   
   void initDate(Date* ptrD)
   {
    ptrD->day=12;
    ptrD->month=12;
    ptrD->year=2012;
   }

   void acceptDate(Date* ptrD)
   {
    cout<<"Enter day:"<<endl;
    cin>>ptrD->day;
    cout<<"Enter month: "<<endl;
    cin>>ptrD->month;
    cout<<"Enter year: "<<endl;
    cin>>ptrD->year; 
   }

   void printDate(Date* ptrD)
   {
    cout<<"Date: "<<ptrD->day<<"-"<<ptrD->month<<"-"<<ptrD->year<<endl;
   }
   
   bool isLeapYear()
   {   
    if((year%100)&&(year%400)||((year%4)&&(year%100!=0)))
    {
      return true;
    }
    else
    {
      return false;
    }
   }


};

int menu()
{
  int ch;
  cout<<"Enter Choice"<<endl;
  cout<<"0.EXIT"<<endl;
  cout<<"1.initDate"<<endl;
  cout<<"2.acceptDate"<<endl;
  cout<<"3.printDate"<<endl;
  cout<<"4.check(leap or not)"<<endl;
 
   cin>>ch;
   return ch;

}

int main()
{
    Date d;
    Date *ptrD=&d;
    int choice;
    bool value;

    while((choice=menu())!=0)
    {
         switch(choice)
         {
            case 1:
                    d.initDate(ptrD);
                    break;

            case 2:
                    d.acceptDate(ptrD);
                    break;

            case 3:
                    d.printDate(ptrD);
                    break;  

            case 4:
                    value=d.isLeapYear();
                    if(value)
                    {
                       cout<<"Leap Year"<<endl;
                    }
                    else
                    {
                        cout<<"Not a leap year"<<endl;
                    }

                    break;                       
            
            default:
                  cout<<"entered incorrect choice"<<endl;
                    break;


         }            

    }


    
    return 0;
}