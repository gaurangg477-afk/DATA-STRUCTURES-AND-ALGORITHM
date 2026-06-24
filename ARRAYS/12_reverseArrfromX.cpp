/*
Question : Reverse Array After a Given Position

Problem Statement:
Given an array of N integers and an index M,
reverse the array starting from index M till the end.

If the given index is invalid, print an appropriate message.

Example 1:
Input:
Array = [1, 2, 3, 4, 5, 6]
M = 2

Output:
[1, 2, 6, 5, 4, 3]

Explanation:
Elements from index 2 to the end are reversed.

--------------------------------------------------

Approach:
1. Validate the given index.
2. Set:
      start = M
      end = size - 1
3. Swap elements at start and end.
4. Move start forward and end backward.
5. Continue until start >= end.

Time Complexity:
O(N)

Space Complexity:
O(1)

Concepts Used:
- Arrays
- Two Pointers
- In-place Reversal
*/

#include <iostream>
using namespace std;

// Function to reverse the array from the given index till the end
void reverseArrwrtX(int Arr[], int size, int Target)
{
    // Check if the given index is valid
    if (Target < 0 || Target >= size)
    {
        cout << "Invalid Index!" << endl;
        return;
    }

    // Initialize pointers
    int start = Target;
    int end = size - 1;

    // Reverse the subarray using two-pointer approach
    while (start < end)
    {
        int temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }

    // Print the modified array
    cout << "\nArray after reversing from index " << Target << ":" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int size;

    // Take array size as input
    cout << "Enter The Number Of Elements You Want In The Array: ";
    cin >> size;

    // Validate array size
    if (size <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int Arr[size];

    // Input array elements
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> Arr[i];
    }

    int Target;

    // Input the starting index for reversal
    cout << "Enter The Index Where You Want To Reverse The Array: ";
    cin >> Target;

    // Call the function
    reverseArrwrtX(Arr, size, Target);

    return 0;
}