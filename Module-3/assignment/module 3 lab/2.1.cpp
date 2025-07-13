#include <iostream>
using namespace std;
int main() {
    // Constant declaration
    const float PI = 3.14159;
    // Variable declarations
    int radius = 5;
    float area;
    char grade = 'A';
    bool isPassed = true;
    string name = "Alice";
    // Operation: calculate area of a circle
    area = PI * radius * radius;
    // Output results
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    return 0;
}
