class Student{

  public:
  int rollno;
  int age;

  static int totalStudents;

  Student(){
  totalStudents++;
  }
};
 int Student :: totalStudents=0;
