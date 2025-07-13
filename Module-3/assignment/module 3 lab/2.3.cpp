#include <iostream>
using namespace std;
int main() {
    // Variables for demonstration
    int a = 10, b = 5;
    bool x = true, y = false;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;

    cout << "\nBitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;
    return 0;
}
