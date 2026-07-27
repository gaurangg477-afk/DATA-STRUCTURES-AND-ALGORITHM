/*
    Problem: Reverse an Array Using Recursion

    Description:
    - Given an array of N integers, reverse the array
      using recursion.
    - The program swaps the first and last elements,
      then recursively processes the remaining subarray.

    Approach:
    1. Read the size of the array.
    2. Input all array elements.
    3. Swap the first and last elements.
    4. Recursively reverse the remaining array.
    5. Display the reversed array.

    Base Condition:
    - Stop recursion when start index becomes greater
      than or equal to the end index.

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)
    (Recursive call stack)

    Example:

    Input:
    Enter size of array: 5
    Enter elements:
    1 2 3 4 5

    Output:
    Reversed Array:
    5 4 3 2 1
*/

#include <iostream>

using namespace std;

//---------------------------------------------------------
// Function: swapNumbers
// Purpose : Swaps two integers using pass by reference.
//---------------------------------------------------------
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//---------------------------------------------------------
// Function: inputArray
// Purpose : Takes array elements as input.
//---------------------------------------------------------
void inputArray(int arr[], int size)
{
    cout << "Enter " << size << " elements of the array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

//---------------------------------------------------------
// Function: reverseArray
// Purpose : Reverses the array using recursion.
//
// Parameters:
// arr   -> Input array
// start -> Starting index
// end   -> Ending index
//---------------------------------------------------------
void reverseArray(int arr[], int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return;
    }

    // Swap first and last element
    swapNumbers(arr[start], arr[end]);

    // Recursive Call
    reverseArray(arr, start + 1, end - 1);
}

//---------------------------------------------------------
// Function: displayArray
// Purpose : Prints the array elements.
//---------------------------------------------------------
void displayArray(int arr[], int size)
{
    cout << "Reversed Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    // User-defined array size
    int arr[size];

    // Input array
    inputArray(arr, size);

    // Reverse array
    reverseArray(arr, 0, size - 1);

    // Display reversed array
    displayArray(arr, size);

    return 0;
}