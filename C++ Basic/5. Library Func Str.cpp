#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string firstName = "Maruf", lastName = "Hossain", fullName, anotherFullName;
  fullName = firstName + " " + lastName; // concatenation
  // fullName.append(firstName);
  // fullName.append(" ");
  // fullName.append(lastName);

  anotherFullName = fullName; // string copy
  // anotherFullName.assign(fullName);

  /**
   * dynamic length of string but static length for array of char
  */
  cout << "First Name: " << firstName << endl;
  cout << "Last Name: " << lastName << endl;
  cout << "Compare firstName and lastName: " << firstName.compare(lastName) << endl;
  /**
   *  return 0 for equal
   *  return >0 for greater than second
   *  return <0 for greater than first
  */

  cout << "Full Name: " << fullName << endl;
  cout << "FullName Length: " << fullName.length() << endl;
  reverse(fullName.begin(), fullName.end()); // from algorithm header file in c++
  cout << "Reverse Full Name: " << fullName << endl;

  cout << "Another Full Name: " << anotherFullName << endl;
  std::transform(anotherFullName.begin(), anotherFullName.end(), anotherFullName.begin(), ::toupper); // from algorithm header file
  cout << "Another Full Name (Uppercase): " << anotherFullName << endl;
  std::transform(anotherFullName.begin(), anotherFullName.end(), anotherFullName.begin(), ::tolower); // from algorithm header file
  cout << "Another Full Name (Lowercase): " << anotherFullName << endl;


  return 0;
}