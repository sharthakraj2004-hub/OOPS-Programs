/*
------------------------------------------------------------
Program Title : Demonstration of Basic Data Types in C++

Name          : Sharthak Raj
Roll No       : 474
Division      : D
SRN           : 01FE23BEC376
Semester      : VII

Concept Used  :
- Integer data type
- Floating-point data type
- Character data type
- Variable declaration and initialization
- Standard output using cout

Description:
This program demonstrates the declaration, initialization,
and display of variables using different basic data types
in C++. Integer, floating-point, and character variables
are used to store and display age, CGPA, and grade.

------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    // Integer variable to store age
    int age = 21;

    // Floating-point variable to store CGPA
    float gpa = 8.97;

    // Character variable to store grade
    char grade = 'A';

    // Display the values of the variables
    cout << "Age: " << age << endl;
    cout << "CGPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
