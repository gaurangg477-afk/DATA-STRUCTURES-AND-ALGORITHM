/*
    Problem: Check Whether an Array is Sorted

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Check whether the array is sorted in ascending order.
    - Check whether the array is sorted in descending order.
    - Display the sorting order of the array.
    - If neither condition is satisfied, report that the array is not sorted.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    5
    1 2 3 4 5

    Output:
    Array is sorted in Ascending Order.
*/

#include <iostream>
using namespace std;

// Function to check whether the array is sorted
int checkSorted(int Arr[], int size)
{
    // Arrays with 0 or 1 elements are always sorted
    if (size <= 1)
    {
        return 0;
    }

    // Assume the array is both ascending and descending
    bool ascending = true;
    bool descending = true;

    // Traverse the array and verify sorting order
    for (int i = 1; i < size; i++)
    {
        // If the current element is smaller than the previous one,
        // the array cannot be ascending
        if (Arr[i] < Arr[i - 1])
        {
            ascending = false;
        }

        // If the current element is greater than the previous one,
        // the array cannot be descending
        if (Arr[i] > Arr[i - 1])
        {
            descending = false;
        }
    }

    // Return 1 if the array is sorted in ascending order
    if (ascending)
    {
        return 1;
    }

    // Return 2 if the array is sorted in descending order
    if (descending)
    {
        return 2;
    }

    // Return 0 if the array is not sorted
    return 0;
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

    // Check the sorting order of the array
    int result = checkSorted(Arr, size);

    // Display the result
    if (result == 1)
    {
        cout << "Array is sorted in Ascending Order." << endl;
    }
    else if (result == 2)
    {
        cout << "Array is sorted in Descending Order." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}