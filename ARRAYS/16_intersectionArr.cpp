/*
    Problem: Find the Intersection of Two Arrays

    Description:
    - Take the sizes of two arrays as input.
    - Accept elements of both arrays from the user.
    - Find all common elements present in both arrays.
    - Store the common elements in a result array.
    - Display the intersection elements.

    Time Complexity: O(n × m)
    Space Complexity: O(min(n, m))

    Example:

    Input:
    Array 1: 1 2 3 4 5
    Array 2: 3 4 5 6 7

    Output:
    Intersection Elements: 3 4 5
*/

#include <iostream>
using namespace std;

// Function to find and display the intersection of two arrays
void intersectionArr(int arr1[], int arr2[], int n, int m)
{
    int k;

    // Determine the maximum possible size of the result array
    if (n < m)
        k = n;
    else
        k = m;

    int resArr[k];
    int index = 0;

    // Compare every element of the first array with every element of the second array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                resArr[index] = arr1[i];
                index++;

                // Stop searching once a match is found
                break;
            }
        }
    }

    // Display the intersection elements
    cout << "\nIntersection Elements: ";

    if (index == 0)
    {
        cout << "No Common Elements Found";
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            cout << resArr[i] << " ";
        }
    }

    cout << endl;
}

int main()
{
    int n, m;

    // Input size of first array
    cout << "Enter The Number Of Elements In First Array: ";
    cin >> n;

    // Validate first array size
    if (n <= 0)
    {
        cout << "Invalid size for first array!" << endl;
        return 0;
    }

    // Input size of second array
    cout << "Enter The Number Of Elements In Second Array: ";
    cin >> m;

    // Validate second array size
    if (m <= 0)
    {
        cout << "Invalid size for second array!" << endl;
        return 0;
    }

    // Declare arrays
    int arr1[n];
    int arr2[m];

    // Input elements of first array
    cout << "\nEnter Elements Of First Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr1[i];
    }

    // Input elements of second array
    cout << "\nEnter Elements Of Second Array:" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr2[i];
    }

    // Find and display the intersection
    intersectionArr(arr1, arr2, n, m);

    return 0;
}