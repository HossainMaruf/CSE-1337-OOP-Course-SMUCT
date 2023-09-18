#include <bits/stdc++.h>
using namespace std;

class Test {
  private:
    int *p;
    ifstream fis;
  public:
    Test() {
      p = new int[10];
      fis.open("somefile.txt");
      cout << "Constructor is called" << endl;
    }
    ~Test() {
      delete [] p;
      fis.close();
      cout << "Destructor is called" << endl;
    }
};

int main() {

  Test t; // Constructor is called

  /**
   * When the stack object destroyed automatically
   * then the destructor will be called automatically
   * for releasing the resources.
  */

  return 0;
}