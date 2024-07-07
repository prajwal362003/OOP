#include <bits/stdc++.h>
using namespace std;

class A{
  public:
    string name;
    int age;

    A(){

    }
};

class B:public A{
  public:
    string caste;

    void getInfo(){
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Caste : " << caste << endl;
    }
};

int main(){
  B b;

  b.name = "Prajwal";
  b.age = 20;
  b.caste = "Teli";

  b.getInfo();

  return 0;
}