/*
    Problem: Quick Sort

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Sort the array using Quick Sort algorithm.
    - Print the sorted array.

    Idea:
    - Choose a pivot element.
    - Partition the array such that:
        * Elements smaller than pivot go to the left.
        * Elements greater than pivot go to the right.
    - Recursively apply the same process to subarrays.

    Time Complexity:
    - Best Case: O(n log n)
    - Average Case: O(n log n)
    - Worst Case: O(n^2)

    Space Complexity: O(log n) (recursion stack)

    Example:

    Input:
    5
    10 7 8 9 1

    Output:
    Sorted Array:
    1 7 8 9 10
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

// Partition function (places pivot at correct position)
int partition(int Arr[], int low, int high)
{
    int pivot = Arr[high];  // choosing last element as pivot
    int i = low - 1;        // index of smaller element

    for (int j = low; j < high; j++)
    {
        // If current element is smaller than pivot
        if (Arr[j] < pivot)
        {
            i++;
            swapVal(Arr[i], Arr[j]);
        }
    }

    // Place pivot in correct position
    swapVal(Arr[i + 1], Arr[high]);

    return (i + 1);
}

// Quick Sort function
void quickSort(int Arr[], int low, int high)
{
    if (low < high)
    {
        // Partitioning index
        int pi = partition(Arr, low, high);

        // Sort elements before and after partition
        quickSort(Arr, low, pi - 1);
        quickSort(Arr, pi + 1, high);
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

    // Call quick sort
    quickSort(Arr, 0, size - 1);

    // Print sorted array
    cout << "\nSorted Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}