#include<iostream>
using namespace std;
class time
{
public:
    time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    int hr,min,sec;
    void read()
    {
        cout<<"Hours=";
        cin>>hr;
        cout<<"Minutes=";
        cin>>min;
        cout<<"Seconds=";
        cin>>sec;
    }
    time operator +(time t2)
    {
        time t3;
        t3.sec=sec+t2.sec;
        if(t3.sec>60)
        {
            t2.min+=1;
            t3.sec-=60;
        }
        t3.min=min+t2.min;
        if(t3.min>60)
        {
            t2.hr+=1;
            t3.min-=60;
        }
        t3.hr=hr+t2.hr;
        return t3;
    }
    void display()
    {
        if(hr>=24)
        {
            hr=hr%24;
        }
        if(hr<10)
        {
            cout<<"0"<<hr;
        }
        else
            cout<<hr;
        if(min<10)
        {
            cout<<":0"<<min;
        }
        else
            cout<<":"<<min;
        if(sec<10)
        {
            cout<<":0"<<sec;
        }
        else
            cout<<":"<<sec;
    }
};
int main()
{

    time c1,c2,c3;
    cout<<"Enter the First Time"<<endl;
    c1.read();
    cout<<"Enter the Second Time"<<endl;
    c2.read();
    c3=c1+c2;
    cout<<"First Time  \t\t";
    c1.display();
    cout<<"\nSecond Time  \t\t";
    c2.display();
    cout<<"\nAfter addition,the time is ";
    c3.display();
    cout<<endl;

}
