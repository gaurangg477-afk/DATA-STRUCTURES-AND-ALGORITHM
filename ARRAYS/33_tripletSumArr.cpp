/*
    Problem: Triplet Sum

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Take a target sum as input.
    - Find all triplets whose sum is equal to the target value.
    - Display the valid triplets.

    Time Complexity: O(n³)
    Space Complexity: O(1)

    Example:

    Input:
    Array: 1 2 3 4 5
    Target Sum: 9

    Output:
    Triplets:
    (1, 3, 5)
    (2, 3, 4)
*/

#include <iostream>
using namespace std;

// Function to find and display all triplets with the given sum
void tripletSum(int arr[], int n, int target)
{
    bool found = false;

    // Check every possible triplet
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << "(" << arr[i] << ", "
                         << arr[j] << ", "
                         << arr[k] << ")" << endl;

                    found = true;
                }
            }
        }
    }

    if (!found)
    {
        cout << "No Triplet Found!" << endl;
    }
}

int main()
{
    int n;

    // Input array size
    cout << "Enter The Number Of Elements In The Array: ";
    cin >> n;

    // Validate array size
    if (n < 3)
    {
        cout << "Array must contain at least 3 elements!" << endl;
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

    // Input target sum
    cout << "\nEnter The Target Sum: ";
    cin >> target;

    cout << "\nTriplets With Sum " << target << ":" << endl;

    // Find triplets
    tripletSum(arr, n, target);

    return 0;
}