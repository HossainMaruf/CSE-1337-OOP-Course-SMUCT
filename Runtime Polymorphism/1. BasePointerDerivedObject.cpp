#include <iostream>
using namespace std;

class Base {
  public:
    void fun1() {
      cout << "From fun1" << endl;
    }
    void fun2() {
      cout << "From fun2" << endl;
    }
    void fun3() {
      cout << "From fun3" << endl;
    }
};

class Derived:public Base {
  public:
    void fun4() {
      cout << "From fun4" << endl;
    }
    void fun5() {
      cout << "From fun5" << endl;
    }
};

int main() {
  Base b;
  b.fun1(); b.fun2(); b.fun3();

  Derived d;
  d.fun1(); d.fun2(); d.fun3(); d.fun4(); d.fun5();

  // Rectangle Cuboid Example
  // BasicCar and AdvanceCar Example
  Base *p = new Derived; 
  p->fun1(); p->fun2(); p->fun3(); // calling the functions that are present in Base class


  return 0;
}