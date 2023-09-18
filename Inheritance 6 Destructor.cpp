#include <bits/stdc++.h>
using namespace std;

class Base {
  public:
    Base() {
      cout << "Base Constructor" << endl;
    }
    ~Base() {
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

  // Base b; 
  /**
   * OUTPUT
   * Base Constructor
   * Base Destructor
  */


 Derived d;
 /**
  * OUTPUT
  * Base Constructor
  * Derived Constructor
  * Derived Destructor
  * Base Destructor
 */

  return 0;
}