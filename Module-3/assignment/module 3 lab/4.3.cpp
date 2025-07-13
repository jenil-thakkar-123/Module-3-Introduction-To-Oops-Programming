#include <iostream>
using namespace std;
// Global variable
int globalVar = 10;
void showGlobalScope() {
    // Accessing and modifying the global variable
    cout << "Inside showGlobalScope(), globalVar = " << globalVar << endl;
    globalVar += 5;
}
void showLocalScope() {
    // Local variable with the same name as the global variable
    int globalVar = 100;
    cout << "Inside showLocalScope(), local globalVar = " << globalVar << endl;
}
int main() {
    cout << "Initial globalVar = " << globalVar << endl;
    showGlobalScope(); // modifies the global variable
    cout << "After showGlobalScope(), globalVar = " << globalVar << endl;
    showLocalScope(); // demonstrates a local variable with same name
    cout << "After showLocalScope(), globalVar still = " << globalVar << endl;
    return 0;
}
