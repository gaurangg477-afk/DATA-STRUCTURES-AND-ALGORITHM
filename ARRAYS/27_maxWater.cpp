/*
    Problem: Container With Most Water

    Description:
    - Given an array where each element represents the height of a vertical line.
    - Find two lines such that they form a container with the x-axis.
    - The container should hold the maximum amount of water.
    - Return the maximum area possible.

    Approach: Two Pointers (Greedy)
    - Start with two pointers at both ends of the array.
    - Compute area using:
        area = min(height[left], height[right]) * (right - left)
    - Move the pointer pointing to the smaller height inward.
    - Repeat until both pointers meet.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Example:

    Input:
    height = [1,8,6,2,5,4,8,3,7]

    Output:
    49
*/

#include <iostream>
using namespace std;

// Function to compute maximum water container area
int maxArea(int height[], int n)
{
    int left = 0;        // starting pointer
    int right = n - 1;   // ending pointer

    int maxWater = 0;    // stores maximum area found

    while (left < right)
    {
        // Calculate width between two pointers
        int width = right - left;

        // Find limiting height (shorter line decides water level)
        int h = min(height[left], height[right]);

        // Current area
        int area = h * width;

        // Update maximum area if current is greater
        if (area > maxWater)
        {
            maxWater = area;
        }

        // Move pointer from the shorter line inward
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return maxWater;
}

int main()
{
    int n;

    // Input size of array
    cout << "Enter size of array: ";
    cin >> n;

    // Validate size
    if (n <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int height[n];

    // Input array elements
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    // Compute and display result
    cout << "Maximum water container area: " << maxArea(height, n) << endl;

    return 0;
}