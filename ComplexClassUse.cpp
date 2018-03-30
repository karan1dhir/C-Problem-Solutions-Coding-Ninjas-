#include<iostream>
#include "ComplexClass.cpp"
using namespace std;

int main(){

  Complex c1(3,4);
  Complex c2(4,5);
  c1.add(c2);
  c1.print();
  cout<<endl;
  c2.print();
  cout<<endl;
  Complex c3=c1+c2;
  c3.print();
  cout<<endl;
  Complex c4=c1*c2;
  c4.print();
}
