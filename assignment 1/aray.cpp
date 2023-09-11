#include<iostream>
using namespace std;

class Complex
{
   int real;
   int imag;
 
public:
   
   void acceptComplex()
   {   
       cout<<"enter real: "<<endl;
       cin>>this->real;
       cout<<"enter imag: "<<endl;
       cin>>this->imag;
   }

   void printComplex()
   {
     cout<<"real: "<<this->real<<endl;
     cout<<"imag: "<<this->imag<<endl;
   }



};

int main()
{
   Complex c;
   
   c.acceptComplex();
   c.printComplex();

    return 0;
}