#include<iostream>
using namespace std;

int main(){
    int age = 22; // 4 Bytes
    char grade = 'A'; // 1 Byte
    float cgpa = 3.92f; // 4 Byte // must add f otherwise it will be in double
    bool flag = true; // 1 Byte // lower case

    double PI = 3.14159265358979; // 8 Byte // more  presize than float

    cout << "Enter your age";
    cin >> age;
    
    cout <<"age = " << age << endl;
    cout << "grade = " << grade << endl;
    cout << "CGPA = " << cgpa << endl;
    cout << "Flag = " << flag << endl;
    cout << "PI = " << PI << endl;

    return 0;
}