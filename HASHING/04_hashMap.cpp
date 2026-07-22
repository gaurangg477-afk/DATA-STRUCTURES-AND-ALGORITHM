/*
    Problem: Frequency Count Using std::map

    Description:
    - Given an array of integers, answer multiple
      frequency queries efficiently using std::map.
    - The map stores each unique element as a key
      and its frequency as the corresponding value.

    Approach:
    1. Read the size of the array.
    2. Input all array elements.
    3. Store the frequency of each element in a map.
    4. Read the number of queries.
    5. For each query, print the frequency of the
       requested element.

    Note:
    - std::map stores keys in sorted order.
    - It can handle both positive and negative integers.

    Time Complexity:
    Building Map : O(N log N)

    Each Query:
    O(log N)

    Total:
    O((N + Q) log N)

    Space Complexity:
    O(N)

    Example:

    Input:
    Enter size of array: 6

    Array:
    1 2 3 2 4 2

    Queries:
    3

    2
    4
    5

    Output:
    Frequency of 2 is: 3
    Frequency of 4 is: 1
    Frequency of 5 is: 0
*/

#include <iostream>
#include <map>

using namespace std;

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int size;

    // Input size of array
    cout << "Enter size of array: ";
    cin >> size;

    // Map to store frequency of elements
    map<int, int> frequencyMap;

    // Input array elements and build frequency map
    cout << "Enter " << size << " elements of the array:\n";

    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;

        frequencyMap[element]++;
    }

    int query;

    // Input number of queries
    cout << "Enter number of queries: ";
    cin >> query;

    // Answer each query
    while (query--)
    {
        int number;

        cout << "Enter number to check: ";
        cin >> number;

        cout << "Frequency of " << number
             << " is: " << frequencyMap[number] << endl;
    }

    return 0;
}