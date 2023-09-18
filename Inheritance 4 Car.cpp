#include <bits/stdc++.h>
using namespace std;

class Car {
  private:
    int gear;
    int cc;
  public:
    Car(int gear = 4, int cc = 500) {
      setGear(gear);
      setCC(cc);
      cout << "Car Constructor Called - Gear = " << gear << " and CC = " << cc << endl;
    }
    void setGear(int gear) { 
      if(gear < 0) this->gear = 0;
      else this->gear = gear; 
    } 
    void setCC(int cc) { 
      if(cc < 0) this->cc = 0;
      else this->cc = cc; 
    }
    int getGear() { return gear; }
    int getCC() { return cc; }
    void display() {
      cout << "Gear = " << getGear() << " and CC = " << getCC() << endl;
    }
};

class Toyota:public Car {
  private:
    int abs;
  public:
    Toyota(int gear, int cc, int abs = 1) {
      cout << "Toyota Constructor Called" << endl;
      setGear(gear);
      setCC(cc);
      cout << "Toyota Constructor Updation - Gear = " << getGear() << " and CC = " << getCC() << endl;
      setABS(abs);
    } 
    void setABS(int abs) { 
      if(abs < 0) this->abs = 0;
      else this->abs = abs;
    }
    int getABS() { return abs; }
    void show() {
      cout << "Gear = " << getGear() << " , CC = " << getCC() << " and Abs = " << getABS() << endl;
    }
};

int main() {

  /**
    Car c;
    c.display(); // Gear = 4 and CC = 500
    c.setGear(10);
    c.setCC(1000);
    c.display(); // Gear = 10 and CC = 1000
  */

  Toyota t(10, 900); 
  /**
   * Car Constructor Called - Gear = 4 and CC = 500
   * Toyota Constructor Called
   * Toyota Constructor Updation - Gear = 10 and CC = 900
  */

  t.show(); // Gear = 10, CC = 900 and Abs = 1
  t.setABS(2);
  t.show(); // Gear = 10, CC = 900 and Abs = 2
  t.setGear(100);
  t.show(); // Gear = 100, CC = 900 and Abs = 2

  return 0;
}