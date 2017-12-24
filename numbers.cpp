#include<iostream>
using namespace std;

int printNumbers(int n){

 if(n<=0)
    return 0;

 printNumbers(n-1);
 cout<<n<<" ";

}

int main(){

int n;
cout<<"enter the number:";
cin>>n;
printNumbers(n);
}
