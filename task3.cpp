/*

Write a C++ program that defines a function called modifyValue which takes an integer pointer as a
parameter. The function should do the following:
● If the integer pointed to by the pointer is even, double its value.
● If the integer pointed to by the pointer is odd, increment its value.
In the main function, declare an integer variable, initialize it with a value, and print its initial value.
Then, call the modifyValue function with the address of this variable. After the function call, print
the modified value of the variable.

*/
#include <iostream>

using namespace std;

void modifyValue(int *ptr) {
    if (*ptr % 2 == 0) *ptr *= 2;
    else *ptr+=1;
}

int main() {
    int a = 10;
    cout << "Initial value: " << a << endl;
    modifyValue(&a);
    cout << "Modified value: " << a << endl;
    return 0;
}