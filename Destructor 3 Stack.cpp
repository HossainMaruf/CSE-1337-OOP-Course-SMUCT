#include <bits/stdc++.h>
using namespace std;

class Employee {
  private:
    int eid;
    string name;
  public:
    Employee(int eid, string name) {
      cout << "Constructor is called" << endl; 
      setID(eid);
      setName(name);
    }
    Employee(Employee &e) {
      eid = e.eid; 
      name = e.name;
    }
    ~Employee() {
      cout << "Destructor is called" << endl;
    }
    void setID(int eid) { this->eid = eid; }
    void setName(string name) { this->name = name; }
    int getID() { return eid; }
    string getName() { return name; }
};

int main() {

  Employee emp1(1, "Abir Zaman");
  Employee &emp2 = emp1; // shallow copy by compiler
  Employee &emp3(emp2); // shallow copy by developer

  cout << "ID: " << emp2.getID() << endl;
  cout << "Name: " << emp2.getName() << endl;

  cout << "ID: " << emp3.getID() << endl;
  cout << "Name: " << emp3.getName() << endl;


  return 0;
}