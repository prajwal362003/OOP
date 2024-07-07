#include <bits/stdc++.h>
using namespace std;

class A{
  public:
    string name;
    int age;

    // constructor 
    // Base class called first then derived class
    A(){
      cout << "Class A constructor" << endl;
    }

    // destructor
    // Derived class's memory deallocated forst then base class's memory is deallocated

      ~A(){
      cout << "Class A destructor" << endl;
    }
};

class B:public A{
  public:
    string caste;

     B(){
      cout << "Class B constructor" << endl;
    }

    ~B(){
      cout << "Class B destructor" << endl;
    }

    void getInfo(){
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Caste : " << caste << endl;
    }
};

// Types of Inheritance

// 1. Single Inheritance => Refer above code
// 2. Multilevel Inheritance => Refer below code
class S{
  public:
    string name;
    int roll;
};

class S1:public S{
  public:
    int id;
};

class S2:public S1{
  public:
    string mob;

    void getInfo(){
      cout << "Name : " << name << endl;
      cout << "Roll : " << roll << endl;
      cout << "ID : " << id << endl;
      cout << "Mobile : " << mob << endl;
    }
};

// 3. Multiple Inheritance
// Base Class 1
class Vehicle{
  public:
    Vehicle(){
      cout << "Vehicle constructor" << endl;
    }
};

// Base Class 2
class FourWheeler{
  public:
    FourWheeler(){
      cout << "FourWheeler constructor" << endl;
    }
};

// Derived Class
class Car:public Vehicle,public FourWheeler{
  public:
    Car(){
      cout << "Car constructor" << endl;
    }
};

// Hierarchical Inheritance
// Base Class
class Sports{
  public:
    Sports(){
      cout << "Sports constructor" << endl;
    }
};

// Derivesd Class 1
class Cricket:public Sports{
  public:
    Cricket(){
      cout << "Cricket constructor" << endl;
    }
};

// Derived Class 2
class Football:public Sports{
  public:
    Football(){
      cout << "Football constructor" << endl;
    }
};


int main(){
  B b;

  b.name = "Prajwal";
  b.age = 20;
  b.caste = "Teli";

  b.getInfo();

  S2 obj;
  obj.name = "Prajwal";
  obj.roll = 1;
  obj.id = 2;
  obj.mob = "8080062882";

  obj.getInfo();

  // Multiple Inheritance Object
  Car c;

  // Hierarchical Inheritance object
  Cricket c1;
  Football f1;

  return 0;
}