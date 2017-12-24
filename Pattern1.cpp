#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=n/2;

    for(int i=0; i<=n; i++)
    {
        int j;
        for(j=0; j<=i; j++)
            cout<<"*";
        cout<<endl;
    }
     for(int i=n-1;i>=0;i--){

        for(int j=i;j>=0;j--)
            cout<<"*";
        cout<<endl;
     }
}
