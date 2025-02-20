#include<iostream>
using namespace std;

int main (){

    // Arithmetic Operators: +, -, *, /, %
    int a = 11, b = 5;
    cout << "Addition: " << (a + b) << endl;       // Addition
    cout << "Difference: " << (a - b) << endl;    // Subtraction
    cout << "Product: " << (a * b) << endl;       // Multiplication
    cout << "Division: " << (a / b) << endl;      // Division
    cout << "Modulo: " << (a % b) << endl;        // Modulus

    // Relational Operators: ==, !=, >, <, >=, <=
    cout << "Equal: " << (a == b) << endl;        // Equal to
    cout << "Not Equal: " << (a != b) << endl;    // Not equal to
    cout << "Greater: " << (a > b) << endl;       // Greater than
    cout << "Less: " << (a < b) << endl;          // Less than
    cout << "Greater or Equal: " << (a >= b) << endl; // Greater than or equal to
    cout << "Less or Equal: " << (a <= b) << endl;    // Less than or equal to

    // Logical Operators: &&, ||, !
    bool x = true, y = false;
    cout << "Logical AND: " << (x && y) << endl;  // Logical AND
    cout << "Logical OR: " << (x || y) << endl;   // Logical OR
    cout << "Logical NOT: " << (!x) << endl;      // Logical NOT

    // Bitwise Operators: &, |, ^, ~
    int c = 5, d = 9;
    cout << "Bitwise AND: " << (c & d) << endl;   // Bitwise AND
    cout << "Bitwise OR: " << (c | d) << endl;    // Bitwise OR
    cout << "Bitwise XOR: " << (c ^ d) << endl;   // Bitwise XOR
    cout << "Bitwise NOT: " << (~c) << endl;      // Bitwise NOT

    // Assignment Operators: =, +=, -=, *=, /=, %=
    int e = 10;
    e += 5;  // e = e + 5
    cout << "Add and Assign: " << e << endl;
    e -= 3;  // e = e - 3
    cout << "Subtract and Assign: " << e << endl;
    e *= 2;  // e = e * 2
    cout << "Multiply and Assign: " << e << endl;
    e /= 4;  // e = e / 4
    cout << "Divide and Assign: " << e << endl;
    e %= 3;  // e = e % 3
    cout << "Modulo and Assign: " << e << endl;

    // Increment and Decrement Operators: ++, --
    int f = 10;
    cout << "Pre-increment: " << (++f) << endl;  // Pre-increment
    cout << "Post-increment: " << (f++) << endl; // Post-increment
    cout << "After Post-increment: " << f << endl;
    cout << "Pre-decrement: " << (--f) << endl;  // Pre-decrement
    cout << "Post-decrement: " << (f--) << endl; // Post-decrement
    cout << "After Post-decrement: " << f << endl;

    return 0;
}