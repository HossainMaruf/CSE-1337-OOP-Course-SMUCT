#include <bits/stdc++.h>
using namespace std;

class Base {
  public:
    Base() {
      cout << "No param base called" << endl;
    }
};

class Derived:public Base {
  public:
    Derived() {
      cout << "No param derived called" << endl;
    }
};

int main() {

  // Base b;
  /**
   * OUTPUT
   * No param base called
  */


  // Base *b = new Base;
  // Base *b = new Base(); 
  /**
   * OUTPUT
   * No param base called 
  */


  // Derived d;
  /**
   * OUTPUT
   * No param base called
   * No param derived called
  */


  // Derived *d = new Derived;
  // Derived *d = new Derived(); 
  /**
   * OUTPUT
   * No param base called
   * No param derived called
  */

  return 0;
}