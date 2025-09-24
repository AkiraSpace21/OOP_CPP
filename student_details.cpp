#include <iostream>
using namespace std;

class Learner {
public:
    string fullName;
    string dept;
    string course;
    string studyYear;
    float gpa;
}; // class ends

int main() {
    Learner s1;
    s1.fullName = "Tripatjot";
    s1.dept = "E&TC";
    s1.course = "C++";
    s1.gpa = 8.6;

    cout << "\nStudent Information:" << endl;
    cout << "Name: " << s1.fullName << endl;
    cout << "Department: " << s1.dept << endl;
    cout << "Course: " << s1.course << endl;
    cout << "GPA: " << s1.gpa << endl;

    return 0;
}
