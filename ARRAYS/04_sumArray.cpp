/*
    Problem: Find the Sum of All Elements in an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Traverse the array and calculate the sum of all elements.
    - Return and display the total sum.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to calculate the sum of all array elements
int sumArray(int Arr[], int size)
{
    int sum = 0;

    // Add each element to the running sum
    for (int i = 0; i < size; i++)
    {
        sum += Arr[i];
    }

    return sum;
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

    // Calculate the sum of all array elements
    int total = sumArray(Arr, size);

    // Display the result
    cout << "Sum of array elements = " << total << endl;

    return 0;
}