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

int main(){
  Student s1("Prajwal",20);

  // Function Overloading
  F f;
  f.addition(5,4);
  f.addition(5,4,3);

  return 0;
}