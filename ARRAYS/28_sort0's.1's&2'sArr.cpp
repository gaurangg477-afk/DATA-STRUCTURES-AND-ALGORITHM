/*
    Problem: Sort an Array of 0s, 1s, and 2s

    Description:
    - Take the size of the array as input.
    - Accept array elements containing only 0s, 1s, and 2s.
    - Sort the array in ascending order.
    - Use the Dutch National Flag Algorithm.
    - Perform sorting in-place without using extra space.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    0 2 1 1 1 1 0 2 0 0 2 1 0

    Output:
    0 0 0 0 0 1 1 1 1 1 1 2 2 2
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

// Function to sort an array containing only 0s, 1s, and 2s
void sortoonetwo(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        // Place 0 at the beginning
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        // 1 is already in the correct region
        else if (arr[mid] == 1)
        {
            mid++;
        }

        // Place 2 at the end
        else
        {
            swap(arr[mid], arr[high]);
            high--;
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
    cout << "\nEnter Array Elements (Only 0, 1 and 2):" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Sort the array
    sortoonetwo(arr, n);

    // Display sorted array
    cout << "\nSorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}