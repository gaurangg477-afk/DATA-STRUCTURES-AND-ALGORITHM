/*
    Problem: Pair Sum

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Take a target sum as input.
    - Find all pairs whose sum is equal to the target value.
    - Display the valid pairs.

    Time Complexity: O(n²)
    Space Complexity: O(1)

    Example:

    Input:
    Array: 1 2 3 4 5
    Target Sum: 5

    Output:
    Pairs:
    (1, 4)
    (2, 3)
*/

#include <iostream>
using namespace std;

// Function to find and display all pairs with the given sum
void pairSum(int arr[], int n, int target)
{
    bool found = false;

    // Check every possible pair
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No Pair Found!" << endl;
    }
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

    cout << "\nPairs With Sum " << target << ":" << endl;

    // Find pair sum
    pairSum(arr, n, target);

    return 0;
}