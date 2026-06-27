/*
    Problem: Find All Duplicate Elements in an Array

    Description:
    - Given an array of integers where each element is in the range 1 to n.
    - Some elements may appear twice, while others appear only once.
    - Find all elements that appear exactly twice.
    - Use the array itself for marking visited elements.
    - Return all duplicate elements.

    Time Complexity: O(n)
    Space Complexity: O(1)
    (Ignoring the space used for the output vector)

    Example:

    Input:
    nums = [4, 3, 2, 7, 8, 2, 3, 1]

    Output:
    [2, 3]
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find all duplicate elements
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;

    // Traverse the array
    for (int i = 0; i < nums.size(); i++)
    {
        // Calculate the corresponding index
        int index = abs(nums[i]) - 1;

        // If already negative, the element is a duplicate
        if (nums[index] < 0)
        {
            ans.push_back(abs(nums[i]));
        }
        else
        {
            // Mark the element as visited
            nums[index] = -nums[index];
        }
    }

    return ans;
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

    vector<int> nums(n);

    // Take array elements as input
    cout << "\nEnter Array Elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums[i];
    }

    // Find duplicate elements
    vector<int> result = findDuplicates(nums);

    // Display duplicates
    cout << "\nDuplicate Elements: ";

    if (result.size() == 0)
    {
        cout << "No Duplicates Found";
    }
    else
    {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
    }

    cout << endl;

    return 0;
}