/*
    Problem: Merge Sort

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Sort the array using Merge Sort algorithm.
    - Print the sorted array.

    Idea:
    - Divide the array into two halves recursively.
    - Sort both halves.
    - Merge the two sorted halves into one sorted array.

    Time Complexity: O(n log n)
    Space Complexity: O(n)

    Example:

    Input:
    5
    5 2 4 1 3

    Output:
    Sorted Array:
    1 2 3 4 5
*/

#include <iostream>
using namespace std;

// Function to merge two sorted halves
void merge(int Arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data into temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = Arr[low + i];

    for (int j = 0; j < n2; j++)
        R[j] = Arr[mid + 1 + j];

    // Merge the temp arrays back into Arr[]
    int i = 0;      // Initial index of L[]
    int j = 0;      // Initial index of R[]
    int k = low;    // Initial index of merged array

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            Arr[k] = L[i];
            i++;
        }
        else
        {
            Arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1)
    {
        Arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2)
    {
        Arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive Merge Sort function
void mergeSort(int Arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        // Sort first half
        mergeSort(Arr, low, mid);

        // Sort second half
        mergeSort(Arr, mid + 1, high);

        // Merge the sorted halves
        merge(Arr, low, mid, high);
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

    // Call merge sort
    mergeSort(Arr, 0, size - 1);

    // Print sorted array
    cout << "\nSorted Array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}