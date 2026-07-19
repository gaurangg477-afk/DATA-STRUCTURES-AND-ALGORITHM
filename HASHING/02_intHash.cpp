/*
    Problem: Frequency Count Using Hashing

    Description:
    - Given an array of integers, answer multiple
      frequency queries efficiently using hashing.
    - The hash array stores the frequency of each
      element present in the array.

    Approach:
    1. Read the size of the array.
    2. Input all array elements.
    3. Store the frequency of each element in a
       hash array.
    4. Read the number of queries.
    5. For each query, print the frequency of the
       requested number.

    Note:
    - This implementation assumes all array elements
      are in the range [0, 99].

    Time Complexity:
    Building Hash Array : O(N)

    Each Query:
    O(1)

    Total:
    O(N + Q)

    Space Complexity:
    O(100)

    Example:

    Input:
    Size = 5

    Array:
    1 2 1 3 2

    Queries = 3

    1
    2
    4

    Output:
    Frequency of 1 is: 2
    Frequency of 2 is: 2
    Frequency of 4 is: 0
*/

#include <iostream>

using namespace std;

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    // User-defined array
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " elements of array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Hash array to store frequencies
    int hash[100] = {0};

    // Build frequency table
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    int query;

    cout << "Enter number of queries: ";
    cin >> query;

    // Answer each query
    while (query--)
    {
        int num;

        cout << "Enter number to check: ";
        cin >> num;

        cout << "Frequency of " << num
             << " is: " << hash[num] << endl;
    }

    return 0;
}