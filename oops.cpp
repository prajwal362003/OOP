#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
      int roll;
      string name;
      string dept;
      string sub;
      double salary;

    // methods/member functions
    void changeDept(string newDept){
      dept = newDept;
    } 

};


class Teacher{
  private:
    double salary;

  public:
    int roll;
    string name;
    string dept;
    string sub;
    int age;

    //setter
    void setSalary(double s){
      salary = s;
    }

    // getter
    double getSalary(){
      return salary;
    }
};

// ENCAPSULATION
class account{
  private:
    double balance; 
    string password;    // data hiding

  public:
    int accNo;
    string name;
};

int main(){
  Student s1;
  Student s2;

  s1.name = "Prajwal";
  s1.roll = 1;

  cout << "Most Obidient student from PICT is " << s1.name << endl;
  cout << "His roll no is " << s1.roll << endl; 

  Teacher t1;
  t1.name = "Prajwal";
  t1.age = 21;
  t1.setSalary(10000.0);
  cout << "Teacher name is " << t1.name << endl;
  cout << "Teacher age is " << t1.age << endl;
  cout << "Teacher salary is " << t1.getSalary() << endl;


  return 0;
}