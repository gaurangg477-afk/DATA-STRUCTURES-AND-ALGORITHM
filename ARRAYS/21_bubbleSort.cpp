/*
    Problem: Bubble Sort

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Sort the array using Bubble Sort algorithm.
    - Print the sorted array.

    Idea:
    - Repeatedly compare adjacent elements.
    - If they are in wrong order, swap them.
    - After each pass, the largest element moves to the end.

    Time Complexity:
    - Best Case: O(n)       (already sorted with optimization)
    - Worst Case: O(n^2)

    Space Complexity: O(1)

    Example:

    Input:
    5
    5 1 4 2 8

    Output:
    Sorted Array:
    1 2 4 5 8
*/

#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int Arr[], int size)
{
    // Outer loop for number of passes
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;

        // Inner loop for comparisons
        for (int j = 0; j < size - i - 1; j++)
        {
            // If current element is greater than next element, swap them
            if (Arr[j] > Arr[j + 1])
            {
                int temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;

                swapped = true;
            }
        }

        // If no swapping happened, array is already sorted
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int size;

    // Input size of array
    cout << "Enter The Number Of Elements You Want In The Array: ";
    cin >> size;

    // Validate size
    if (size <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int Arr[size];

    // Input array elements
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> Arr[i];
    }

    // Call bubble sort function
    bubbleSort(Arr, size);

    // Print sorted array
    cout << "\nSorted Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}