#include <bits/stdc++.h>
using namespace std;

class WoodenTop {
  private:
    int size;
  public:
    WoodenTop() { // Default Constructor
      cout << "Default of Base" << endl;
    }
    WoodenTop(int size) { // Parameterized Constructor
      this->size = size;
      cout << "Param of Base and size = " << size << endl;
    }
};

class Table:public WoodenTop {
  private:
    int height;
  public:
    Table() { // Default Constructor
      cout << "Default of Derived" << endl;
    }
    Table(int height) { // Parameterized Constructor
      this->height = height;
      cout << "Param of Derived and height = " << height << endl;
    }
    Table(int size, int height):WoodenTop(size) {
      this->height = height;
      cout << "Customized Table" << endl;
    }
};

int main() {
  
  // WoodenTop w;
  /**
   * OUTPUT
   * Default of Base
  */

  // WoodenTop w(10);
  /**
   * OUTPUT
   * Param of Base and size = 10
  */

  // We don't need the special table, we need the default one.
  // Table t;
  /**
   * OUTPUT
   * Default of Base
   * Default of Derived
  */

  // We need a height specific table
  // Table t(10);
  /**
   * OUTPUT
   * Default of Base
   * Param of Derived and height = 10
  */

  // We need top and height specific table
  // Table t(20, 10);
  /**
   * OUTPUT
   * Param of Base and size = 20
   * Customized Table
  */

  return 0;
}