/*
    Problem: Find Maximum Element in an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Traverse the array to find the largest element.
    - Return and display the maximum element.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to find the maximum element in the array
int maxElement(int Arr[], int size)
{
    // Handle the case of an empty array
    if (size == 0)
    {
        return -1;
    }

    // Assume the first element is the maximum
    int MAX = Arr[0];

    // Compare each element with the current maximum
    for (int i = 1; i < size; i++)
    {
        if (Arr[i] > MAX)
        {
            MAX = Arr[i];
        }
    }

    return MAX;
}

int main()
{
    int size;

    // Input the number of elements in the array
    cout << "Enter The Number Of Elements You Want In The Array: ";
    cin >> size;

    // Validate array size
    if (size <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    // Declare array of the given size
    int Arr[size];

    // Take array elements as input from the user
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> Arr[i];
    }

    // Find the maximum element in the array
    int result = maxElement(Arr, size);

    // Display the result
    cout << "Maximum Element: " << result << endl;

    return 0;
}