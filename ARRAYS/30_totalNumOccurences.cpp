/*
    Problem: Find Total Number of Occurrences of an Element in an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Take a target element as input.
    - Count how many times the target element appears in the array.
    - Display the total count of occurrences.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    Array: 1 2 2 3 2 4 5
    Target: 2

    Output:
    Total Occurrences of 2 = 3
*/

#include <iostream>
using namespace std;

// Function to count occurrences of target element
int countOccurrences(int arr[], int n, int target)
{
    int count = 0;

    // Traverse the array and count matches
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;

    // Input array size
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
    cout << "\nEnter Array Elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int target;

    // Input target element
    cout << "\nEnter Element To Find Occurrences: ";
    cin >> target;

    // Count occurrences
    int count = countOccurrences(arr, n, target);

    // Display result
    cout << "\nTotal Occurrences of " << target << " = " << count << endl;

    return 0;
}