## Encapsulation Example in C++

This C++ program contains a simple C++ class called `Employee`. The class has three private data members: `name`, `age`, and `salary`. It also has public getters and setters for these data members.

The main function in the code snippet creates an instance of the `Employee` class and prints the employee's name and age. It then changes the employee's age and prints it again.

## Getting Started
### Prerequisites

You need a C++ compiler to build and run this program. If you don't have one installed, you can download and install one like [g++](https://gcc.gnu.org/).

### Or Use IDE
1. Download and install CodeBlocks or any C++ IDE if you do not already have it installed.
2. Download the main.cpp file.
3. Add it to your C++ project.
4. Run the project application.


### Code 

```
#include <iostream>

using namespace std;

class Employee {
  // Private data members.
  private:
    string name;
    int age;
    double salary;

  // Public methods.
  public:
    // Constructor.
    Employee(string name, int age, double salary) {
      this->name = name;
      this->age = age;
      this->salary = salary;
    }

    // Getters and setters for the private data members.
    string getName() { return name; }
    void setName(string name) { this->name = name; }
    int getAge() { return age; }
    void setAge(int age) { this->age = age; }
    double getSalary() { return salary; }
    void setSalary(double salary) { this->salary = salary; }
};

int main() {
  // Create an instance of the Employee class.
  Employee employee("Brian Mashi", 29, 100000);

  // Print the employee's name.
  cout << employee.getName() << endl;

  // Change the employee's age.
  employee.setAge(36);

  // Print the employee's age.
  cout << employee.getAge() << endl;

  return 0;
}

```
### Output :
Brian Mashi </br>
36 </br> </br>

## License
This code is licensed under the MIT License.


