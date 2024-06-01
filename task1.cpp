/*

Write a C++ program that demonstrates dynamic memory allocation:
● Use the new operator to allocate memory for an integer variable.
● Initialize the allocated memory with a value.
● Print the value and address of the dynamically allocated memory.
● Use the delete operator to free the allocated memory.

*/
#include <iostream>

using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 10;
    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;
    delete ptr;
    return 0;
}