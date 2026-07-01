/*
    Problem: Find First and Last Occurrence of an Element in a Sorted Array

    Description:
    - Take the size of the sorted array as input.
    - Accept array elements from the user.
    - Take the target element to search.
    - Use Binary Search to find the first occurrence of the target.
    - Use Binary Search to find the last occurrence of the target.
    - Display both positions.
    - If the element is not present, return -1.

    Time Complexity: O(log n)
    Space Complexity: O(1)

    Example:

    Input:
    Array: 1 2 2 2 3 4 5
    Target: 2

    Output:
    First Occurrence: 1
    Last Occurrence: 3
*/

#include <iostream>
using namespace std;

// Function to find the first occurrence of the target element
int firstOccurrence(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            ans = mid;

            // Continue searching on the left side
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

// Function to find the last occurrence of the target element
int lastOccurrence(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            ans = mid;

            // Continue searching on the right side
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n;

    // Input the size of the array
    cout << "Enter The Number Of Elements In The Array: ";
    cin >> n;

    // Validate array size
    if (n <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];

    // Input array elements
    cout << "\nEnter Elements Of The Sorted Array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int k;

    // Input target element
    cout << "\nEnter The Element To Search: ";
    cin >> k;

    // Find first and last occurrence
    int first = firstOccurrence(arr, n, k);
    int last = lastOccurrence(arr, n, k);

    // Display results
    cout << "\nFirst Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    return 0;
}