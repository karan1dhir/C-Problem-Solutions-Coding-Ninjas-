#include<iostream>
using namespace std;
class Complex{

  int real;
  int imaginary;

  public:
  Complex(int real,int imaginary){

   this->imaginary=imaginary;
   this->real=real;
  }
  void print(){
    cout<<this->real<<"+"<<this->imaginary<<"i";
  }
  Complex operator+(Complex const &c2)const{

   int real=this->real+c2.real;
   int imaginary=this->imaginary+c2.imaginary;
   Complex c3(real,imaginary);
   return c3;
  }
  void add(Complex const &c2){

   this->real=this->real+c2.real;
   this->imaginary=this->imaginary+c2.imaginary;
  }
   void friend multiply(Complex c1,Complex c2){

    int x=c1.real*c2.real-c1.imaginary*c2.imaginary;
    int y=c1.real*c2.imaginary+c1.imaginary*c2.real;
    c1.real=x;
    c1.imaginary=y;
   }
   Complex friend operator*(Complex c1,Complex c2){

    int x=c1.real*c2.real-c1.imaginary*c2.imaginary;
    int y=c1.real*c2.imaginary+c1.imaginary*c2.real;
    Complex c3(x,y);
    return c3;
   }
};







