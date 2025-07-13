//POP (Procedural Programming)
#include <iostream>
using namespace std;
int main() {
    float length, width, area;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    area = length * width;
    cout << "Area = " << area << endl;
    return 0;
}

//OOP (Object-Oriented Programming)

// #include <iostream>
// using namespace std;
// class Rectangle {
//     float length, width;
// public:
//     void input() {
//         cout << "Enter length: ";
//         cin >> length;
//         cout << "Enter width: ";
//         cin >> width;
//     }
//     void displayArea() {
//         cout << "Area = " << length * width << endl;
//     }
// };
// int main() {
//     Rectangle r;
//     r.input();
//     r.displayArea();
//     return 0;
// }