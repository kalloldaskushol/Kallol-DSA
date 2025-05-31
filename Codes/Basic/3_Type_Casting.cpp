#include<iostream>
using namespace std;
/*
C++ provides two types of type casting:

    1.Implicit Type Casting (Automatic Conversion) : this happens automatically when a smaller data type is converted into a larger data type to prevent data loss.

    2.Explicit Type Casting (Manual Conversion) : Explicit type casting is required when converting a larger data type into a smaller one, which might result in data loss. 
    
    if we want to transfor a double value(8 Bytes) to integer value(4Bytes) then we need explicit type castint it is done manually 

    */
int main (){

    char grade = 'A';
    int value = grade; //Implicit Type Casting

    cout << value << endl; //65 

    double price = 100.9999999999999;
    int newPrice = (int)price;
    cout << newPrice << endl;



    return 0;
}