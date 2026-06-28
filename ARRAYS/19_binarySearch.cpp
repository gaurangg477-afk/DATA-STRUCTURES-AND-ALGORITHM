/*
    Problem: Binary Search in an Array

    Description:
    - Take the size of the array as input.
    - Accept array elements from the user.
    - Accept the target element to search.
    - First sort the array using Bubble Sort.
    - Apply Binary Search on the sorted array.
    - Return the index of the target element in the sorted array.
    - If the element is not found, return -1.

    Time Complexity: O(n²) + O(log n)
    Space Complexity: O(1)

    Example:

    Input:
    Array: 5 1 4 2 3
    Target: 4

    Output:
    Sorted Array: 1 2 3 4 5
    Element Found At Index: 3
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to swap two values
void swapValue(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

// Function to sort the array using Bubble Sort
void sortArray(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if elements are in the wrong order
            if (arr[j] > arr[j + 1])
            {
                swapValue(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to perform Binary Search
int binarySearch(vector<int> &arr, int k)
{
    // Binary Search requires a sorted array
    sortArray(arr);

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n;

    // Input array size
    cout << "Enter The Number Of Elements In The Array: ";
    cin >> n;

    // Validate size
    if (n <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int k;

    // Input target element
    cout << "Enter The Element To Search: ";
    cin >> k;

    vector<int> arr(n);

    // Input array elements
    cout << "\nEnter Array Elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Perform Binary Search
    int index = binarySearch(arr, k);

    // Display sorted array
    cout << "\nSorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Display result
    if (index != -1)
    {
        cout << "Element Found At Index: " << index << endl;
    }
    else
    {
        cout << "Element Not Found!" << endl;
    }

    return 0;
}