/*

Write a C++ program that works with dynamic 1-dimensional arrays:
● Create a dynamic array of integers of size n.
● Initialize the array with values.
● Print the elements of the array.
● Implement functions to delete an element from the array and add an element.

*/
#include <iostream>
#include <vector>

using namespace std;

void addElement(vector<int> &temp) {
    int element;
    cout << "Enter element to add: ";
    cin >> element;
    temp.push_back(element);
}

void removeElement(vector<int> &temp, int &index) {
    temp.erase(temp.begin() + index);
}

void display(vector<int> &temp) {
    for (int &i: temp) {
        cout << i << "    ";
    }
    cout << endl;
}

int main() {
    int size = 0, index;
    cout << "Enter the size of array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter values" << endl;
    for (int &i: arr) {
        cin >> i;
    }
    display(arr);
    addElement(arr);
    display(arr);
    cout << "Enter index to remove an element: ";
    cin >> index;
    removeElement(arr, index);
    display(arr);
    return 0;
}