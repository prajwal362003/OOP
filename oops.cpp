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

// Constructor
class A{
  public:

  // Default Constructor
    // A(){
    //   cout << "Constructor called" << endl;
    // }
  
    // Parameterized Constructor
    A(string str,int firstVal, int secondVal){
      cout << "Parameterized Constructor called" << endl;
      s1 = str;
      a = firstVal;
      b = secondVal;
    }
    string s1;
    int a;
    int b;

    void getInfo(){
      cout << "Name" << s1 << endl;
      cout << "Value 1" << a << endl;
      cout << "Value 2" << b << endl;
    }
};

// this operator
class T{
  public:

    string name,caste;
    int roll;

    T(string name,int roll,string caste){
      this -> name = name;
      this -> roll = roll;
      this -> caste = caste;
    }

    void getThisInfo(){
      cout << "Name : " << name << endl;
      cout << "Roll : " << roll << endl;
      cout << "Caste : " << caste << endl;
    }
};

int main(){
  Student s1;
  Student s2;
  A a("Prajwal",4,6);    // constructor called

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

  a.getInfo();

  // this operator obj;
  T t("Prajwal",23,"Teli");
  t.getThisInfo();

  return 0;
}