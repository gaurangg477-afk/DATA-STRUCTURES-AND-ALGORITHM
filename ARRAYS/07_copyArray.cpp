/*
    Problem: Copy an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Create a new array of the same size.
    - Copy all elements from the original array to the new array.
    - Display the copied array.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

// Function to copy elements from one array to another
void copyArray(int Arr[], int size)
{
    // Handle the case of an empty array
    if (size == 0)
    {
        return;
    }

    // Declare a new array to store copied elements
    int CopyArr[size];

    // Copy each element from the original array
    for (int i = 0; i < size; i++)
    {
        CopyArr[i] = Arr[i];
    }

    // Display the copied array
    cout << "Copied Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << CopyArr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int size;

    // Input the number of elements in the array
    cout << "Enter The Number Of Elements You Want In The Array: ";
    cin >> size;

    // Validate array size
    if (size <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    // Declare array of the given size
    int Arr[size];

    // Take array elements as input from the user
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> Arr[i];
    }

    // Copy and display the array
    copyArray(Arr, size);

    return 0;
}