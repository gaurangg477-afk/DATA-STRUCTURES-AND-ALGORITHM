/*
    Problem: Find the Duplicate Element in an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - The array contains numbers from 1 to n-1.
    - Exactly one element is repeated more than once.
    - Use the XOR operation to find the duplicate element.
    - Display the duplicate element.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    5
    1 2 3 4 2

    Output:
    Duplicate Element: 2
*/

#include <iostream>
using namespace std;

// Function to find the duplicate element using XOR
int duplicateElement(int arr[], int n)
{
    int ans = 0;

    // XOR all array elements
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR numbers from 1 to n-1
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
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
    if (n <= 1)
    {
        cout << "Array size must be greater than 1!" << endl;
        return 0;
    }

    // Declare array
    int arr[n];

    // Take array elements as input from the user
    cout << "\nEnter Array Elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Find the duplicate element
    int duplicate = duplicateElement(arr, n);

    // Display the result
    cout << "\nDuplicate Element: " << duplicate << endl;

    return 0;
}