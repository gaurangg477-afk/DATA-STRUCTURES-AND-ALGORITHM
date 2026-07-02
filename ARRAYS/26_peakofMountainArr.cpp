/*
    Problem: Find Peak Element in a Mountain Array

    Description:
    - A mountain array is an array where elements strictly increase first,
      then strictly decrease.
    - The peak element is the maximum element in the array.
    - Find and return the index of the peak element.
    - Use Binary Search for optimal solution.

    Time Complexity: O(log n)
    Space Complexity: O(1)

    Example:

    Input:
    Array: 1 3 5 7 6 4 2

    Output:
    Peak Element Index: 3
    Peak Element: 7
*/

#include <iostream>
using namespace std;

// Function to find peak element index in a mountain array
int findPeak(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        // If mid is in increasing slope, peak is on right side
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        else
        {
            // Peak is on left side (including mid)
            high = mid;
        }
    }

    // low == high is peak index
    return low;
}

int main()
{
    int n;

    // Input size of array
    cout << "Enter The Number Of Elements In The Array: ";
    cin >> n;

    // Validate size
    if (n <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];

    // Input array elements
    cout << "\nEnter Mountain Array Elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Find peak index
    int peakIndex = findPeak(arr, n);

    cout << "\nPeak Element Index: " << peakIndex << endl;
    cout << "Peak Element: " << arr[peakIndex] << endl;

    return 0;
}