/*
    Problem: Find Square Root Using Binary Search

    Description:
    - Given a non-negative integer N.
    - Find the integer part of its square root.
    - If N is not a perfect square, return the floor value.

    Example:

    Input:
    N = 27

    Output:
    5

    Explanation:
    sqrt(27) = 5.196...
    Integer part = 5

    Approach:
    - Apply Binary Search on the range [0, N].
    - Calculate mid and check mid * mid.
    - If mid * mid == N, return mid.
    - If mid * mid < N, store answer and search right half.
    - Otherwise search left half.

    Time Complexity: O(log N)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to find integer square root
int squareRoot(int n)
{
    int low = 0;
    int high = n;
    int ans = -1;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter A Number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Square Root Does Not Exist For Negative Numbers!" << endl;
        return 0;
    }

    cout << "\nSquare Root: " << squareRoot(n) << endl;

    return 0;
}