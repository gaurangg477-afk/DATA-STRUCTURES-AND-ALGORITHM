/*
Question: Swap Alternate Elements in an Array

Problem Statement:
Given an array of integers, swap every pair of adjacent
elements. If the array has an odd number of elements,
the last element remains unchanged.

Example:
Input:  [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]

Approach:
- Create a separate swap function.
- Traverse the array with a step size of 2.
- Swap Arr[i] and Arr[i + 1] using the swap function.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to swap two numbers using pass by reference
void swapValue(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap alternate elements in the array
void swapAlternate(int Arr[], int size)
{
    // Traverse array in pairs
    for (int i = 0; i < size - 1; i += 2)
    {
        swapValue(Arr[i], Arr[i + 1]);
    }
}

int main()
{
    int size;

    // Input array size
    cout << "Enter The Number Of Elements You Want In The Array: ";
    cin >> size;

    // Validate size
    if (size <= 0)
    {
        cout << "Invalid Array Size!" << endl;
        return 0;
    }

    // Declare array
    int Arr[size];

    // Input array elements
    cout << "\nEnter Array Elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }

    // Perform alternate swapping
    swapAlternate(Arr, size);

    // Display modified array
    cout << "\nArray After Swapping Alternate Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;
    return 0;
}