/*
    Problem: Move All Zeros to the End of an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Move all zero elements to the end of the array.
    - Maintain the relative order of non-zero elements.
    - Display the modified array.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    6
    0 1 0 3 12 0

    Output:
    1 3 12 0 0 0
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

// Function to move all zeros to the end of the array
void zerosToEnd(int Arr[], int size)
{
    // Position where the next non-zero element should be placed
    int j = 0;

    // Traverse the array
    for (int i = 0; i < size; i++)
    {
        // If the current element is non-zero,
        // place it at position j
        if (Arr[i] != 0)
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
        cout << "Enter element " << i + 1 << ": ";
        cin >> Arr[i];
    }

    // Move all zeros to the end
    zerosToEnd(Arr, size);

    // Display the modified array
    cout << "Array after moving zeros to the end: ";

    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;

    return 0;
}