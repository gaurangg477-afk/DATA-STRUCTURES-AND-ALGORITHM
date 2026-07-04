/*
    Problem: Sort an Array of 0s and 1s

    Description:
    - Take the size of the array as input.
    - Accept array elements containing only 0s and 1s.
    - Sort the array so that all 0s come before all 1s.
    - Use the Two Pointer Technique.
    - Perform sorting in-place without using extra space.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    1 0 1 0 1 0

    Output:
    0 0 0 1 1 1
*/

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

// Function to sort an array containing only 0s and 1s
void sort(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        // Move left pointer until a 1 is found
        while (left < right && arr[left] == 0)
        {
            left++;
        }

        // Move right pointer until a 0 is found
        while (left < right && arr[right] == 1)
        {
            right--;
        }

        // Swap misplaced elements
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
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
    cout << "\nEnter Array Elements (Only 0 and 1):" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, n);

    // Display sorted array
    cout << "\nSorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}