#include <bits/stdc++.h>
using namespace std;

class Base {
  public:
    Base() {
      cout << "Base Constructor" << endl;
    }
    virtual ~Base() {
      cout << "Base Destructor" << endl;
    }
};

class Derived:public Base {
  public:
    Derived() {
      cout << "Derived Constructor" << endl;
    }
    ~Derived() {
      cout << "Derived Destructor" << endl;
    }
};

int main() {

  Base *b = new Derived();
  delete b;
  /**
   * OUTPUT
   * Base Constructor
   * Derived Constructor
   * Base Destructor
  */

 /**
  * If we want runtime polymorphism and destructor execution normally then
  * we need to make base class destructor as virtual
 */

 /**
  * OUTPUT
  * Base Constructor
  * Derived Constructor
  * Derived Destructor
  * Base Destructor
 */

  return 0;
}