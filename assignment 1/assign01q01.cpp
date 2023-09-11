#include<iostream>
using namespace std;

struct Date
{
     int day;
     int month;
     int year;
   
   void initDate(struct Date *ptrD)
   {
       ptrD->day=1;
       ptrD->month=1;
       ptrD->year=2023;   
   }

    void acceptDate(struct Date *ptrD)
   {
      cout<<"enter day:"<<endl;
      cin>>ptrD->day;
      cout<<"enter month:"<<endl;
      cin>>ptrD->month;
      cout<<"enter year:"<<endl;
      cin>>ptrD->year;

   }

    void printDate(struct Date *ptrD)
   {
     cout<<"date: "<<ptrD->day<<":"<<ptrD->month<<":"<<ptrD->year<<endl;
   }


};

int menu()
{
    int ch;
    cout<<"Enter the choice"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.initDate"<<endl;
    cout<<"2.acceptDate"<<endl;
    cout<<"3.printDate"<<endl;
    cin>>ch;
    return ch ;

}

int main()
{
   struct Date d;
   struct Date* ptrD=&d;

   int choice;

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

           default :


                break;     

       }


   }

return 0;
}