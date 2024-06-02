/*

Write a C++ program that dynamically creates a 2D integer array based on user input for rows and columns. Implement a function to initialize the array with random values. Then, create another function to calculate and return the sum of all elements in the array.

*/
#include <iostream>
using namespace std;
int main()
{
    int rows, cols, sum = 0;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;
    int **arr = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        arr[i] = new int[cols];
    }
    srand(time(0));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = (rand() % 10) + 1;
        }
    }
    cout << "2D Array: " << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {

            cout << arr[i][j] << "    ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum: " << sum;
    for (int i = 0; i < rows; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
