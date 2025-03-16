#include <iostream>
using namespace std;
/*
A shift operator is a type of bitwise operator used in programming languages to shift the bits of a binary number left or right. There are two main types of shift operators:

Left Shift (<<)

    ->Moves bits to the left by a specified number of positions.
    ->Fills the vacant rightmost bits with zeros. 
    ->Effectively multiplies the number by 2 to the power n (here the n is the number of shifts)

    SYNTEX:

    5 << 2 means that shift the binary form of 5 by 2 in the left

int x = 5;  // Binary: 0000 0101
int result = x << 1;  // Binary: 0000 1010 (Decimal: 10)

Right Shift (>>)

->Moves bits to the right by a specified number of positions.
->Behavior depends on the type of right shift:
->Arithmetic right shift: Preserves the sign bit (for signed numbers).

    SYNTEX:

    5 >> 2 means that shift the binary form of 5 by 2 in the right.
    *** is there are zeros on the left of every numbers but in the right there are no numbers thats why they get out from the number

int x = 8;  // Binary: 0000 1000
int result = x >> 1;  // Binary: 0000 0100 (Decimal: 4)

*/
int main(){

    cout << (5<<1) << endl;
    cout << (8>>1) << endl;

    return 0;
}