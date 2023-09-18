#include <bits/stdc++.h>
using namespace std;

class Base {
  private:
    int a;
  protected:
    int b;
  public:
    int c;
    /**
     * all members are accessible within class
    */
    void funBase() {
      a = 10; // private
      b = 20; // protected
      c = 30; // public
    }
};

class Derived:public Base {
  public:
    /**
     * Only protedted and public member is accessible in derived class
    */
    void funDerived() {
      // a = 1;
      b = 2; // protected
      c = 3; // public
    }
};

int main() {

  Base base;
  // base.a = 234;
  // base.b = 34;
  base.c = 191; // public
  /**
   * Only public member is accessible using object
  */

  return 0;
}