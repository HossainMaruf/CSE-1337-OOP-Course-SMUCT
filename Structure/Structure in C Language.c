#include <stdio.h>

struct Employee {
  // static int eid; // static variable not allowed

  // public: 
  /**
   * access modifier is not allowed
   * So data hiding is not possible
  */

  char name[50]; // variables are allowed without static

  // void setID() {} // method not allowed (general + constructor)
  // char fatherName[50] = "Rabiul Islam"; // Default value is not allowed
};

void main() {
  /**
   * Remove all the members from struct, then the size of the
   * struct will be 0
  */
  struct Employee e;
  printf("%d", sizeof e);
  /**
   * Only pointer to struct possible
   * Reference is not possible
  */
}