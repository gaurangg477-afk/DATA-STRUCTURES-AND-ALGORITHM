/*
    Problem: Linear Search in an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Take a target element to search for.
    - Traverse the array and find the index of the target element.
    - Return and display the index if found.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to find the index of the target element
int linearSearch(int Arr[], int size, int Target)
{
    // Traverse the array and compare each element with the target
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == Target)
        {
            return i; // Return index when element is found
        }
    }

    return -1; // Return -1 if element is not found
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

    // Input the target element to be searched
    int Target;
    cout << "Enter element to search: ";
    cin >> Target;

    // Perform linear search and store the returned index
    int index = linearSearch(Arr, size, Target);

    // Display the result
    if (index != -1)
    {
        cout << "Element Found At Index: " << index << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    return 0;
}