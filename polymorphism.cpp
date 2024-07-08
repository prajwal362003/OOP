#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
    string name;
    int roll;

    Student(){
      cout << "Non-Parameterized Constructor" << endl;
    }

    Student(string name,int roll){
      this->name = name;
      this->roll = roll;
      cout << "Parameterized Constructor" << endl;
    }
};

// Function Overloading
class F{
  public:

    int addition(int a,int b){
      cout << "Addition is " << a+b << endl;
    }

    int addition(int a,int b,int c){
      cout << "Addition is " << a+b+c << endl;
    }
};

// // Operator Overloading
class P{
  int a;
  public:
    
    void getData(){
      cout << "Enter the value of a: ";
      cin >> a;
    }

    void showData(){
      cout << "Value of a is " << a << endl;
    }

    P operator+(P bb){
      P cc;
      cc.a = a + bb.a;
      return cc;
    }
};

// Function Overriding
class Parent{
  public:
    void getData(){
      cout << "Parent Class" << endl;
    }
};

class Child:public Parent{
  public:
    void getData(){
      cout << "Child Class" << endl;
    }
};

// Abstract Classes & Pure Virtual Function
class Shape{
  virtual void draw() = 0;    // pure virtual function
};

class Circle:public Shape{
  public:
    void draw(){
      cout << "Drawing a Circle" << endl;
    }
};

int main(){
  Student s1("Prajwal",20);

  // Function Overloading
  F f;
  f.addition(5,4);
  f.addition(5,4,3);

  // Operator Overloading
  P aa,bb,cc;
  aa.getData();
  bb.getData();

  cc = aa + bb;
  cc.showData();

  // Function Overriding
  Parent p1;
  p1.getData();

  Child c1;
  c1.getData();

  // Abstract Classes
  Circle c;
  c.draw();

  return 0;
}