/*

Write a C++ program that performs the following operations using pointers:
● Declare two integer variables and initialize them with values.
● Declare two pointer variables and point them to the respective integer variables.
● Perform addition and subtraction operations using pointers and print the results.

*/
#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 15;
    int *ptr1 = &a;
    int *ptr2 = &b;
    cout << "Addition: " << *ptr1 + *ptr2 << endl;
    cout << "Subtraction: " << *ptr1 - *ptr2 << endl;
    return 0;
}