#include<iostream>
#include<stack>
using namespace std;
#include "StackUse.cpp"

int main(){

stack<int> s;
s.size();
StackUse<char> stackUse;
stackUse.push(100);
stackUse.push(101);
stackUse.push(102);
stackUse.push(103);
stackUse.push(104);

cout<<stackUse.top()<<endl;
cout<<stackUse.pop()<<endl;
cout<<stackUse.pop()<<endl;
cout<<stackUse.pop()<<endl;
cout<<stackUse.top()<<endl;
cout<<stackUse.sizeOfArray()<<endl;
cout<<stackUse.isEmpty()<<endl;
}
