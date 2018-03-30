#include<iostream>
using namespace std;
#include "pair.cpp"

int main(){

Pair<int> p1;
Pair<double> p2;
p1.setX(10);
p1.setY(20);
cout<<p1.getX()<<endl;
cout<<p1.getY()<<endl;
p2.setX(100.789);
p2.setY(200.8657);
cout<<p2.getX()<<endl;
cout<<p2.getY();

}
