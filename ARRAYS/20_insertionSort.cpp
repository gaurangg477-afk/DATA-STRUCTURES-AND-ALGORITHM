/*
    Problem: Insertion Sort

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Sort the array using Insertion Sort algorithm.
    - Print the sorted array.

    Idea:
    - Treat the first element as a sorted part.
    - Pick one element at a time and insert it into the correct position
      in the already sorted part of the array.

    Time Complexity:
    - Best Case: O(n)   (already sorted array)
    - Worst Case: O(n^2)

    Space Complexity: O(1)

    Example:

    Input:
    5
    5 2 4 6 1

    Output:
    Sorted Array:
    1 2 4 5 6
*/

#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int Arr[], int size)
{
    // Start from index 1 because index 0 is already considered sorted
    for (int i = 1; i < size; i++)
    {
        int key = Arr[i];   // Current element to be placed
        int j = i - 1;

        // Move elements of Arr[0..i-1] that are greater than key
        // one position ahead of their current position
        while (j >= 0 && Arr[j] > key)
        {
            Arr[j + 1] = Arr[j];
            j--;
        }

        // Place the key at its correct position
        Arr[j + 1] = key;
    }
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

    // Call insertion sort function
    insertionSort(Arr, size);

    // Print sorted array
    cout << "\nSorted Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}