#include <iostream>
using namespace std;
// Base class: Person
class Person {
protected:
    string name;
    int age;
public:
    void getPersonInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void showPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
// Derived class: Student
class Student : public Person {
private:
    float gpa;
public:
    void getStudentInfo() {
        getPersonInfo();  // Call base class function
        cout << "Enter GPA: ";
        cin >> gpa;
    }
    void showStudentInfo() {
        showPersonInfo();  // Call base class function
        cout << "GPA: " << gpa << endl;
    }
};
// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;
public:
    void getTeacherInfo() {
        getPersonInfo();  // Call base class function
        cout << "Enter subject taught: ";
        cin >> subject;
    }
    void showTeacherInfo() {
        showPersonInfo();  // Call base class function
        cout << "Subject: " << subject << endl;
    }
};
int main() {
    // Student object
    Student student;
    cout << "--- Enter Student Info ---" << endl;
    student.getStudentInfo();
    cout << "\n--- Student Details ---" << endl;
    student.showStudentInfo();
    // Teacher object
    Teacher teacher;
    cout << "\n--- Enter Teacher Info ---" << endl;
    teacher.getTeacherInfo();
    cout << "\n--- Teacher Details ---" << endl;
    teacher.showTeacherInfo();
    return 0;
}

  

