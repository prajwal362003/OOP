#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
    string name;
    double cgpa;

    double *percentPtr;    // dynamic allocation

    Student(string name,double cgpa,double percent){
      this -> name = name;
      this -> cgpa = cgpa;
      percentPtr = new double;    // points to new memory
      *percentPtr = percent;    // store the value of percent in this memory
    }

    Student(Student &obj){    // custom copy constructor
      this -> name = obj.name;
      this -> cgpa = obj.cgpa;
      // this -> percentPtr = obj.percentPtr;

      // DEEP COPY
      percentPtr = new double;  // make a copy again
      *percentPtr = *obj.percentPtr;  // copy the value of obj's memory to this memory
    }

    void getInfo(){
      cout << "Name: " << name << endl;
      cout << "CGPA: " << cgpa << endl;
      cout << "Percent: " << *percentPtr << endl;
    }
};

int main(){
  Student s1("Prajwal",9.90,98.9);
  s1.getInfo();

  Student s2(s1);   // default copy constructor
  *(s2.percentPtr) = 92.0;
  s1.getInfo();

  s2.name = "Vikas";
  s2.getInfo();

  return 0;
}