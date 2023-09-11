#include<iostream>
using namespace std;

class Tollbooth
{
  private:
     unsigned int totalpayingCars,totalnopayCars;
     double totalAmount;


  public:
      
      Tollbooth()
      {
        this->totalpayingCars=0;
        this->totalnopayCars=0;
        this->totalAmount=0;
      }

      void payingCar()
      {    
           
           totalpayingCars++;
        
           totalAmount+=0.5;
      }

      void nopayCar()
      {
           totalnopayCars++;
      }  

      void printOnConsole()
      {
        cout<<"No. of paying cars : "<<totalpayingCars<<endl;
        cout<<"No of nopay cars :"<<totalnopayCars<<endl;
        cout<<"total no. of cars : "<<totalpayingCars+totalnopayCars<<endl;
        cout<<"total amount : "<<totalAmount<<endl;
      }

};

int meun()
{
    int ch;
    cout<<"0.EXIT"<<endl;
    cout<<"1.paying car"<<endl;
    cout<<"2.no pay car"<<endl;
    cout<<"3.display no. of cars and amount:"<<endl;
    cin>>ch;

    return ch;
}



int main()
{
    Tollbooth t1;
    int choice;

    while((choice=meun())!=0)
    {
        switch(choice)
        {
            case 1:
                t1.payingCar();
                break;

            case 2:
                t1.nopayCar();
                break;

            case 3:
                t1.printOnConsole();
                break;

            default:
                cout<<"wrong choice entered "<<endl;        
        }
    }

  cout<<"Thank you........Have a safe and happy journey.."<<endl;

}