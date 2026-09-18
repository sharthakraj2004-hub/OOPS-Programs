/*
------------------------------------------------------------
Program Title : Sum of Private Data Members Using a Common
                Friend Function

Name          : Sharthak Raj
Roll No       : 474
Division      : D
SRN           : 01FE23BEC376
Semester      : VII

Concept Used  :
- Classes and Objects
- Private Data Members
- Friend Function
- Common Friend Function
- Accessing Private Members of Multiple Classes

Description:
This program demonstrates the use of a common friend function
to access and add private data members of two different
classes, ABC and XYZ.

The classes ABC and XYZ contain private data members numA
and numB respectively. The common friend function add()
is declared as a friend in both classes, allowing it to
access the private members of both classes and calculate
their sum.

The function prototype used is:
int add(ABC, XYZ);

------------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Forward declaration of class XYZ
class XYZ;

// Class ABC
class ABC
{
private:
    // Private data member of class ABC
    int numA;

public:
    // Constructor to initialize numA
    ABC(int a)
    {
        numA = a;
    }

    // Declaration of common friend function
    friend int add(ABC, XYZ);
};

// Class XYZ
class XYZ
{
private:
    // Private data member of class XYZ
    int numB;

public:
    // Constructor to initialize numB
    XYZ(int b)
    {
        numB = b;
    }

    // Declaration of common friend function
    friend int add(ABC, XYZ);
};

// Common friend function
// It can access private members of both ABC and XYZ
int add(ABC objA, XYZ objB)
{
    return objA.numA + objB.numB;
}

// Main function
int main()
{
    // Create objects of both classes
    ABC objA(10);
    XYZ objB(20);

    // Call the common friend function
    int sum = add(objA, objB);

    // Display the result
    cout << "Sum of numA and numB: " << sum << endl;

    return 0;
}
