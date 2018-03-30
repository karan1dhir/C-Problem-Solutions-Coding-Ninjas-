
class timeClass{

 int mm;
 int ss;
 int hh

 public:
 timeClass(int hh,int mm,int ss){

 this->hh=hh
 this->mm=mm;
 this->ss=ss;
 }
 void print(){

  cout<<this->hh<<":"<<this->min<<":"<<this->ss;
 }
 timeClass add(timeClass const &t2)const{

  int hh=this->hh+t2.hh;
  int mm=this->mm+t2.mm;
  int ss=this->ss+t2.ss;
  timeClass t3(hh,mm,ss);
  return t3;
  }
 void operator+(timeClass const &t2)const{

  int hh=this->hh+t2.hh;
  int mm=this->mm+t2.mm;
  int ss=this->ss+t2.ss;
  timeClass t3(hh,mm,ss);
  return t3;
 }
}
