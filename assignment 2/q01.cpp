#include<iostream>
using namespace std;

class Box
{
    private:
    int length;
    int breadth;
    int height;

    public:
       Box()
       {
        this->length=1;
        this->breadth=1;
        this->height=1;
       }
       Box(int length,int breadth,int height)
       {
           this->length=length;
           this->breadth=breadth;
           this->height=height;
       }

       void calculateVolume()
       {
          cout<<"Volume of a Box is = "<<this->length*this->breadth*this->height<<endl;

       }

};


int menu()
{
    int ch;
    cout<<"0.EXIT"<<endl;
    cout<<"1.calculate default volume"<<endl;
    cout<<"2.calculate volume with parameters"<<endl;
    cin>>ch;

    return ch;
}


int main()
{
   
   int choice;

   while((choice=menu())!=0)
   {
    switch(choice)
    {
        case 1:
        {
            Box b1;
            b1.calculateVolume();
            break;
        }
        

        case 2:
          {
            int length,breadth,height;

            cout<<"Enter length : "<<endl;
            cin>>length; 
            cout<<"Enter breadth: "<<endl;  
            cin>>breadth;  
            cout<<"Enter height : "<<endl;
            cin>>height;
            Box b2(length,breadth,height);
            b2.calculateVolume();
            break;    
          } 

        default:
            cout<<"wrong choice entered"<<endl;
            break;          
    }
   }

   return 0;
}
   
   
