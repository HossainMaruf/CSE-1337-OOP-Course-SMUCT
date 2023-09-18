#include <bits/stdc++.h>
using namespace std;

class Rectangle {
  private:
    int length, breadth;
  public:
    Rectangle(int length = 0, int breadth = 0) {
      setLength(length);
      setBreadth(breadth);
    }
    void setLength(int length) {
      if(length < 0) this->length = 0;
      else this->length = length;
    }
    void setBreadth(int breadth) {
      if(breadth < 0) this->breadth = 0;
      else this->breadth = breadth;
    }
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int getArea() { return length * breadth; }
};

class Cuboid:public Rectangle {
  private:
    int height;
  public:
    Cuboid(int length, int breadth, int height): Rectangle(length, breadth) {
      setHeight(height);
    }
    void setHeight(int height) {
      if(height < 0) this->height = 0;
      else this->height = height;
    }
    int getHeight() { return height; }
    int getVolume() { return (getLength() * getBreadth() * height); }
};

int main() {

  Rectangle r1;
  cout << "Area = " << r1.getArea() << endl; // 0
  Rectangle r2(10);
  cout << "Area = " << r2.getArea() << endl; // 0
  Rectangle r3(10, 10);
  cout << "Area = " << r3.getArea() << endl; // 100
  Cuboid c1(4, 3, 5);
  cout << "Area = " << c1.getArea() << endl; // 12
  cout << "Area = " << c1.getVolume() << endl; // 60
  return 0;
}