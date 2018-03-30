#include<iostream>
using namespace std;
#include "Fraction.cpp"

 int main(){


 Fraction f1(10,2);
 Fraction f2(10,2);
 /*Fraction f3=f1.add(f2);
 Fraction fnew=f1+f2;
 Fraction fnew1=f1*f2;
 Fraction fnew2=f1.multiply(f2);
 fnew.print();
 f3.print();
 f1.print();
 f2.print();
 fnew1.print();
 fnew2.print();
 if(f1==f2)
    cout<<"Equal";
 else
    cout<<"Not equal";*/

  /*  f1.print();
    Fraction f3=++f1;
    f1.print();
    f3.print();*/

    f1.print();
    Fraction f3=f1++;
    f1.print();
    f3.print();

 }
