#include <iostream>
using namespace std;

class Parent {
  public:
    virtual void display() {
      cout << "Parent Display" << endl;
    }
};

class Child:public Parent {
  public:
    void display() {
      cout << "Child Display" << endl;
    }
};

int main() {
  Parent p;
  p.display(); // parent display
  Child c;
  c.display(); // child display

  Parent *ptr = new Child;
  ptr->display(); // Parent Display
  /**
   * But when we declare Base class function as virtual then child class display will be called.
  */

  return 0;
}