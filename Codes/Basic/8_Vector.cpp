#include <bits/stdc++.h>
using namespace std;
#include <vector>
/*
Vectors are dynamic means the size can be changed.

static allocation meeans it is executed in the complile time. Ex stack

Dynamic Allocation means it is executed in the run time. Ex heap.
*/
int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << vec[0] << endl;

    vector<int> vec2(5, 0); // means make 5 indices with zero.

    /*
    for (int i : vec)
This means: for every element i in the vector vec, do something.

*/
    for (int value : vec2)
    {
        cout << value << endl; // i means value stored in the idx.
    }

    vector<char> vec3 = {'a', 'b', 'c', 'd'};

    for (char val : vec3)
    {
        cout << val << endl;
    }

    // to print address

    for (int &add : vec)
    {
        cout << &add << endl;
    }

    cout << endl;
    // Vector function
    // size()
    cout << "size of vector_1 = " << vec.size() << endl;

    cout << endl;

    // push_back -> in  push_back funtion the array is doubled in its size if it is fulled and we try to push_back. And the old one will be deleted

    vec.push_back(25); // adds in last
    cout << "size of vector_1 after push_back= (the vector was 5 in size when push_back called the vector became double in size and the push_back will be happened in 6th index. So the size will be 6 and capacity will be 10.) =" << vec.size() << endl;
    cout << "capacity of vector_1 after push_back= " << vec.capacity() << endl;

    // pop_back

    vec.pop_back(); // deletes the last index
    cout << "size of vector_1 after pop_back= " << vec.size() << endl;

    // front

    cout << vec.front() << endl; // prints the first index value

    // at

    cout << vec.at(1) << endl; // prints the value at given index;
    cout << vec.at(2) << endl; // prints the value at given index;
    cout << vec.at(3) << endl; // prints the value at given index;
    cout << vec.at(4) << endl; // prints the value at given index;
    return 0;
}