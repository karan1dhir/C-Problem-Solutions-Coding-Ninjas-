#include<iostream>
using namespace std;
int main(){


  int n;
  cin>>n;

  int sum_even=0;
  int sum_odd=0;

  while(n>0){

    int a=n%10;
    if(a%2==0)
      sum_even=sum_even+a;
    else
      sum_odd=sum_odd+a;
    n=n/10;
  }
  cout<<sum_even<<" "<<sum_odd;
}


