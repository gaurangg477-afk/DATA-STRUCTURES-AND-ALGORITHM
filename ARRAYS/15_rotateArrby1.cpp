/*
    Problem: Rotate an Array by One Position to the Right

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Rotate the array by one position towards the right.
    - The last element becomes the first element.
    - Display the rotated array.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    5
    1 2 3 4 5

    Output:
    5 1 2 3 4
*/

#include <iostream>
using namespace std;

// Function to rotate the array by one position to the right
void rotateByOne(int arr[], int n)
{

    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
    }
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

    // Declare array of the given size
    int arr[n];

    // Take array elements as input from the user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Rotate the array by one position
    rotateByOne(arr, n);

    // Display the rotated array
    cout << "Array after rotating by one position: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}