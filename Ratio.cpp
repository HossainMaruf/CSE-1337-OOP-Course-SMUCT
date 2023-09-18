#include <bits/stdc++.h>
using namespace std;

class Ratio {
  private:
    int numerator, denominator;
    void CheckAndSetDenominator(int); // Utility function
  public:
    /**
     * inline for frequently called function
    */
    inline Ratio(int, int);
    inline void setNumerator(int);
    inline void setDenominator(int);
    inline int getNumerator();
    inline int getDenominator();
    inline double convert();
    inline void invert();
    inline void print();
};

Ratio::Ratio(int num, int deno) {
  setNumerator(num);
  setDenominator(deno);
}
void Ratio::CheckAndSetDenominator(int deno) {
  if(deno == 0) denominator = 1;
  else denominator = deno;
}
void Ratio::setNumerator(int num) { numerator = num; }
void Ratio::setDenominator(int deno) { CheckAndSetDenominator(deno); }
int Ratio::getNumerator() { return numerator; }
int Ratio::getDenominator() { return denominator; }
double Ratio::convert() { return (double) numerator / denominator; }
void Ratio::invert() {
  int temp = numerator;
  numerator = denominator;
  CheckAndSetDenominator(temp);
}
void Ratio::print() {
  cout << numerator << "/" << denominator << endl;
}

int main() {
  Ratio r1(23, 2);
  cout << r1.convert() << endl;
  Ratio r2(10, 20);
  cout << r2.convert() << endl;
  r1.invert();
  cout << r1.convert() << endl;
  Ratio r3(10, 8);
  cout << r3.convert() << endl;
  return 0;
}