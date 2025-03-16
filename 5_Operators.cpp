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

    // Increment and Decrement Operators: ++, --
    int f = 10;
    cout << "Pre-increment: " << (++f) << endl;  // Pre-increment
    cout << "Post-increment: " << (f++) << endl; // Post-increment
    cout << "After Post-increment: " << f << endl;
    cout << "Pre-decrement: " << (--f) << endl;  // Pre-decrement
    cout << "Post-decrement: " << (f--) << endl; // Post-decrement
    cout << "After Post-decrement: " << f << endl;

    // Bitwise Operators

    // Bitwise and it is mainly the multiplication of binary numbers and give us the result in decimal

    int g = 4, h = 8;
    cout << "bitwise AND : " << (g & h) << endl;

    // Bitwise OR, it is mainly the OR Operation of binary numbers and give us the result in decimal

    cout << "bitwise OR : " << (g | h) << endl;

    // Bitwise XOR it is mainly the XOR of binary numbers and give us the result in decimal

    cout << "bitwise XOR : " << (g ^ h) << endl;


    return 0;
}