/*
    Problem: Check Duplicate Within K Distance

    Description:
    - Given an array of integers and an integer K,
      determine whether there exist two equal elements
      whose indices differ by at most K.
    - If such a duplicate exists, print the duplicate
      element; otherwise, indicate that no such duplicate
      was found.

    Approach:
    1. Read the target distance K.
    2. Read the array elements.
    3. Use an unordered_map to store the latest index
       of every element.
    4. If the current element has appeared before,
       compare the current index with its previous index.
    5. If the difference is less than or equal to K,
       a valid duplicate has been found.
    6. Otherwise, update the element's latest index.

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)

    Example:

    Input:
    Target Distance: 3

    Array:
    1 2 3 1 4

    Output:
    Duplicate found: 1
*/

#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    // Stores element -> latest index
    unordered_map<int, int> indexMap;

    int size;
    int targetDistance;

    // Input target distance
    cout << "Enter target distance (K): ";
    cin >> targetDistance;

    // Input array size
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter elements of array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        // Element already exists
        if (indexMap.find(arr[i]) != indexMap.end())
        {
            int previousIndex = indexMap[arr[i]];

            // Check index difference
            if (abs(i - previousIndex) <= targetDistance)
            {
                cout << "Duplicate found: "
                     << arr[i] << endl;

                return 0;
            }
        }

        // Update latest index
        indexMap[arr[i]] = i;
    }

    cout << "No duplicate found within the given distance." << endl;

    return 0;
}