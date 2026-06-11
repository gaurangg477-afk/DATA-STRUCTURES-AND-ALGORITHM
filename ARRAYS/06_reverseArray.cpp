/*
    Problem: Reverse an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Reverse the array using the two-pointer approach.
    - Display the reversed array.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to reverse the array
void reverseArray(int Arr[], int size)
{
    int start = 0;
    int end = size - 1;

    // Swap elements from both ends until pointers meet
    while (start < end)
    {
        swap(Arr[start], Arr[end]);
        start++;
        end--;
    }
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

    // Reverse the array
    reverseArray(Arr, size);

    // Display the reversed array
    cout << "Reversed Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;

    return 0;
}