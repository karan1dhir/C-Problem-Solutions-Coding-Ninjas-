#include<iostream>
using namespace std;

int main(){

 int n;
 cin>>n;
 int count=0;
 for(int i=5;n/i>=1;i=i*5){
   count=count+n/i;
 }
  cout<<endl<<count;
  return 0;
}
