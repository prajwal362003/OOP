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

int main(){
  Student s1;
  Student s2;

  s1.name = "Prajwal";
  s1.roll = 1;

  cout << "Most Obidient student from PICT is " << s1.name << endl;
  cout << "His roll no is " << s1.roll << endl; 
  return 0;
}