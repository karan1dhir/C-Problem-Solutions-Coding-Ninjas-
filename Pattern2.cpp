#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

 n=n/2+1;

  for(int i=1;i<=n;i++){

    for(int j=i;j<=n;j++)
      cout<<"*";

    for(int k=1;k<i;k++)
      cout<<" ";

    for(int j=i;j<=n;j++)
      cout<<"*";

    cout<<endl;
 }
}
