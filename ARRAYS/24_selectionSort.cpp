/*
    Problem: Selection Sort

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Sort the array using Selection Sort algorithm.
    - Print the sorted array.

    Idea:
    - Repeatedly find the minimum element from the unsorted part.
    - Place it at the beginning of the unsorted part.
    - Move boundary of sorted and unsorted part one step forward.

    Time Complexity:
    - Best Case: O(n^2)
    - Worst Case: O(n^2)

    Space Complexity: O(1)

    Example:

    Input:
    5
    64 25 12 22 11

    Output:
    Sorted Array:
    11 12 22 25 64
*/

#include <iostream>
using namespace std;

// Function to swap two elements
void swapVal(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform Selection Sort
void selectionSort(int Arr[], int size)
{
    // Traverse through all array elements
    for (int i = 0; i < size - 1; i++)
    {
        // Assume current index has minimum element
        int minIndex = i;

        // Find the minimum element in remaining unsorted array
        for (int j = i + 1; j < size; j++)
        {
            if (Arr[j] < Arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i)
        {
            swapVal(Arr[i], Arr[minIndex]);
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

    // Call selection sort
    selectionSort(Arr, size);

    // Print sorted array
    cout << "\nSorted Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}