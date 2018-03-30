#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

 int main(){

 unordered_map<string,int> ourmap;
 pair<string,int> p("abc",1);
 ourmap.insert(p);
 ourmap["def"]=2;
 cout<<ourmap["def"]<<endl;
 cout<<ourmap["abc"];


 }
