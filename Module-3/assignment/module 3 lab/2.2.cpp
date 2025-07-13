#include <iostream>
using namespace std;
int main() {
    // Implicit type conversion
    int intVal = 10;
    float floatResult = intVal + 5.5;  // int is implicitly converted to float
    // Explicit type conversion (type casting)
    float floatVal = 9.8;
    int intResult = (int)floatVal + 5; // float is explicitly cast to int
    // Output results
    cout << "Implicit Conversion (int + float): " << floatResult << endl;
    cout << "Explicit Conversion (float to int + 5): " << intResult << endl;
    return 0;
}
