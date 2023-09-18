#include <bits/stdc++.h>
using namespace std;

class Base {
  public:
    int x;
    void show() {
      cout << "Base show() x = " << x << endl;
    }
};

class Derived:public Base {
  public:
    int y;
    void display() {
      cout << "Derived display() x = " << x << " y = " << y << endl;
    }
};

int main() {

  Base b;
  b.x = 10;
  b.show(); // Base show() 10

  Derived d;
  d.x = 100;
  d.y = 200;
  d.show(); // Base show() 100
  d.display(); // Derived display() x = 100 y = 200


  return 0;
}