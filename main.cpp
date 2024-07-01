#include <iostream>
#include <string>
using namespace std;

struct Employee {
  string name;
  double hourlyRate;
  double hoursWorked;
};

int main() {
  const int NUM_EMPLOYEES = 1;
  Employee employees[NUM_EMPLOYEES];

  // Get employee information
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    cout << "Enter employee " << i + 1 << " name: ";
    getline(cin, employees[i].name);

    cout << "Enter hourly rate for " << employees[i].name << ": ";
    cin >> employees[i].hourlyRate;

    cout << "Enter hours worked by " << employees[i].name << ": ";
    cin >> employees[i].hoursWorked;
    cin.ignore(); // Clear newline character
  }

  // Calculate and display payroll
  cout << "\nPay cafe roll:" << endl;
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    double grossPay = employees[i].hourlyRate * employees[i].hoursWorked;
    cout << employees[i].name << " - $" << grossPay << endl;
  }

  return 0;
}