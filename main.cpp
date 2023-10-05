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

