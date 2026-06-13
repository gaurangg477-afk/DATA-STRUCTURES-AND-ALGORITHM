/*
    Problem: Count Odd and Even Elements in an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Traverse the array and check each element.
    - Count the number of even and odd elements.
    - Display the total count of even and odd numbers.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to count odd and even elements in the array
void countOddEven(int Arr[], int size)
{
    int oddCount = 0;
    int evenCount = 0;
    int i = 0;

    // Traverse the array and count odd/even elements
    while (i < size)
    {
        if (Arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        i++;
    }

    // Display the results
    cout << "Even Numbers Count: " << evenCount << endl;
    cout << "Odd Numbers Count: " << oddCount << endl;
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

    // Count and display odd and even elements
    countOddEven(Arr, size);

    return 0;
}