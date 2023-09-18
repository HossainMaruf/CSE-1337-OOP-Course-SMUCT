#include <bits/stdc++.h>
using namespace std;

class Employee {
  private:
    int eid;
    string name;
  public:
    Employee() {
      cout << "Constructor of array of objects" << endl;
    }
    Employee(int eid, string name) {
      cout << "Constructor is called" << endl; 
      setID(eid);
      setName(name);
    }
    Employee(Employee* e) {
      eid = e->eid;
      name = e->name;
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

  Employee* emp1 = new Employee(1, "Abir Zaman");

  cout << "ID: " << emp1->getID() << endl;
  cout << "Name: " << emp1->getName() << endl;

  // Employee* emp2 = emp1;
  Employee* &emp2 = emp1;
  /**
   * Compiler does not copy the dynamic object
  */

  cout << "ID: " << emp2->getID() << endl;
  cout << "Name: " << emp2->getName() << endl;

  Employee* emp3 = new Employee(emp1);

  cout << "ID: " << emp3->getID() << endl;
  cout << "Name: " << emp3->getName() << endl;

  Employee *emp = new Employee[10];

  delete emp1;
  // delete emp2; // Dangling pointer
  delete emp3;
  delete [] emp;

  return 0;
}