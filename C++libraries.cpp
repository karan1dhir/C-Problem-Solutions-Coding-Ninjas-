#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

int const target=2;
vector<int> v;
v.push_back(20);
v.push_back(2);
v.push_back(1);
int simple=count(v.begin(),v.end(),target);
//int simple_two=count_if(v.begin(),v.end(),[](int elem){return elem%2!=0;});

cout<<point;
cout<<simple;
//cout<<simple_two;
}
