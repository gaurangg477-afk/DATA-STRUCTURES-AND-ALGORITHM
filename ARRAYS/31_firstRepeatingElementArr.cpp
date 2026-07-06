/*
    Problem: First Repeating Element

    Description:
    - Given an array, find the first element that repeats.
    - Return its index (1-based or 0-based depending on requirement).
    - If no element repeats, return -1.

    Approach:
    - Use hashing (unordered_map) to store frequency.
    - Traverse again to find first element with frequency > 1.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int firstRepeating(int arr[], int n)
{
    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Find first repeating element
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > 1)
        {
            return i; // return index of first repeating element
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << firstRepeating(arr, n) << endl;

    return 0;
}