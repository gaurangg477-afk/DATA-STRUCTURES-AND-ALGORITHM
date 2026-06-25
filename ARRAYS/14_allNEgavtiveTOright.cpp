/*
    Problem: Move All Negative Elements to the Beginning of an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Move all negative elements to the beginning of the array.
    - Maintain the relative order as much as possible using swapping.
    - Display the modified array.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    6
    1 -2 3 -4 5 -6

    Output:
    -2 -4 -6 1 5 3
*/

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to move all negative elements to the beginning
void zerosToEnd(int Arr[], int size)
{
    // Position where the next negative element should be placed
    int j = 0;

    // Traverse the array
    for (int i = 0; i < size; i++)
    {
        // If the current element is negative,
        // place it at position j
        if (Arr[i] < 0)
        {
            swap(Arr[i], Arr[j]);
            j++;
        }
    }
}

int main()
{
    int size;

    // Input the number of elements in the array
    cout << "Enter The Number Of Elements In The Array: ";
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
        cout << "Enter element " << i << ": ";
        cin >> Arr[i];
    }

    // Move all negative elements to the beginning
    zerosToEnd(Arr, size);

    // Display the modified array
    cout << "Array after moving negative elements to the beginning: ";

    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;

    return 0;
}