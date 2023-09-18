#include <bits/stdc++.h>
using namespace std;

class Rectangle {
  private:
    int length, breadth;
};

class Cuboid:public Rectangle {
  private:
    int height;
};

class Table {
  private:
    Rectangle r;
    int legs;
};

/**
 * A Class can be used in two ways
 * Cuboid is a Rectangle (IsA Relationship)
 * Table has a Rectangle (HasA Relationship)
*/


int main() {


  return 0;
}