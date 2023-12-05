#include <iostream>
using namespace std;

class BasicCar {
  public:
    void Start() {
      cout << "Car is starting" << endl;
    }
};

class AdvanceCar:public BasicCar {
  public:
    void playMusic() {
      cout << "Music is playing" << endl;
    }
};

int main() {
  BasicCar b;
  b.Start();

  AdvanceCar d;
  d.Start();
  d.playMusic();

  BasicCar *p = new AdvanceCar; 
  p->Start();

  // Compile Time Error
  // AdvanceCar *q = new BasicCar;


  return 0;
}