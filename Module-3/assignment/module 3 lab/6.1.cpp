#include <iostream>
using namespace std;
// Define Calculator class
class Calculator {
public:
    // Function for addition
    float add(float a, float b) {
        return a + b;
    }
    // Function for subtraction
    float subtract(float a, float b) {
        return a - b;
    }
    // Function for multiplication
    float multiply(float a, float b) {
        return a * b;
    }
    // Function for division
    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Division by zero is undefined!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;  // Create object of Calculator
    float num1, num2;
    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // Perform and display operations
    cout << "\nResults:\n";
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;
    return 0;
}

