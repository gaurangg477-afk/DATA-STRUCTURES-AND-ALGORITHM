/*
    Problem: Find Square Root With Precision

    Description:
    - Given a non-negative integer N.
    - Find its square root upto a given number of decimal places.

    Example:

    Input:
    N = 27
    Precision = 3

    Output:
    5.196

    Time Complexity: O(log N + Precision * 10)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to find integer part of square root
int integerSquareRoot(int n)
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

// Function to find square root with precision
double preciseSquareRoot(int n, int precision)
{
    double ans = integerSquareRoot(n);

    double factor = 1.0;

    // Add decimal places one by one
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;

        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    int precision;

    cout << "Enter Number: ";
    cin >> n;

    cout << "Enter Decimal Precision: ";
    cin >> precision;

    cout << "\nSquare Root = "
         << preciseSquareRoot(n, precision)
         << endl;

    return 0;
}