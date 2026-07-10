/*
    Problem: Find Pivot Element in a Sorted Rotated Array

    Description:
    - A sorted array is rotated at some pivot point.
    - Find the index of the smallest element.
    - The smallest element is called the pivot element.
    - Use Binary Search for an efficient solution.

    Time Complexity: O(log n)
    Space Complexity: O(1)

    Example:

    Input:
    Array: 7 9 1 2 3

    Output:
    Pivot Index: 2
    Pivot Element: 1
*/

#include <iostream>
using namespace std;

// Function to find pivot index
int findPivot(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        // Pivot lies on the right side
        if (arr[mid] >= arr[0])
        {
            low = mid + 1;
        }
        else
        {
            // Pivot lies on the left side including mid
            high = mid;
        }
    }

    return low;
}

int main()
{
    int n;

    // Input array size
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
    cout << "\nEnter Elements Of The Rotated Sorted Array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int pivotIndex = findPivot(arr, n);

    cout << "\nPivot Index: " << pivotIndex << endl;
    cout << "Pivot Element: " << arr[pivotIndex] << endl;

    return 0;
}