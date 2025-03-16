#include<iostream>
using namespace std;
/*
Data Type Modifiers in C and C++:

Data type modifiers are keywords used to alter the properties of fundamental data types in C and C++. These modifiers affect the range, storage size, or sign representation of a variable. The main data type modifiers include:

    Signed
    Unsigned
    Short
    Long
*/
int main(){
/*
    1. Signed Modifier (signed):
    The default for int and char if no modifier is specified.
    Allows both negative and positive values.
*/
signed int x = -100;  // Can hold negative values

/*
2. Unsigned Modifier (unsigned):
        ->Allows only positive values (including zero).
        ->Increases the maximum range of positive values since it doesn't allocate space for negative numbers.
*/
unsigned int y = 100;  // Cannot hold negative values
/*
    3. Short Modifier (short)
        ->Reduces the storage size of an int, depending on the system architecture.
        ->Used when memory efficiency is important.
*/
short int age = 32;  // Takes less memory than a regular int
/*
    4. Long Modifier (long)
        ->Increases the storage size of an int or double, allowing for larger values.
*/

long int a = 2147483647;  // Larger range than int
long double b = 3.141592653589793;  // Higher precision

cout<<sizeof(int) <<endl; //4
cout<<sizeof(long int) <<endl; //4
cout<<sizeof(long long int) <<endl; // 8
cout<<sizeof(signed int) <<endl; // 4
cout<<sizeof(unsigned int) <<endl; // 4
cout<<sizeof(long double) <<endl; //12
    return 0;
    
}