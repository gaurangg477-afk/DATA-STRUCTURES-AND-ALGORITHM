/*
    Problem: Fibonacci Number (Iterative - Space Optimized)

    Description:
    - Given an integer N, return the Nth Fibonacci number.
    - The Fibonacci sequence is defined as:
        F(0) = 0
        F(1) = 1
        F(N) = F(N-1) + F(N-2), for N > 1
    - This solution uses an iterative approach with
      constant extra space.

    Approach:
    1. Handle the base cases for N = 0 and N = 1.
    2. Maintain two variables representing the previous
       two Fibonacci numbers.
    3. Iterate from 2 to N and compute the current
       Fibonacci number.
    4. Update the previous values after each iteration.
    5. Return the final Fibonacci number.

    Time Complexity:
    O(N)

    Space Complexity:
    O(1)

    Example:

    Input:
    N = 6

    Output:
    8

    Explanation:
    Fibonacci Sequence:
    0 1 1 2 3 5 8
    The 6th Fibonacci number is 8.
*/

#include <iostream>

using namespace std;

//---------------------------------------------------------
// Function: fibonacci
// Purpose : Returns the Nth Fibonacci number using
//           an iterative, space-optimized approach.
//
// Parameter:
// n -> Position of the Fibonacci number
//---------------------------------------------------------
int fibonacci(int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    // Store the previous two Fibonacci numbers
    int previousSecond = 0;
    int previousFirst = 1;

    // Compute Fibonacci numbers iteratively
    for (int i = 2; i <= n; i++)
    {
        int current = previousFirst + previousSecond;

        previousSecond = previousFirst;
        previousFirst = current;
    }

    return previousFirst;
}

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: "
         << fibonacci(n) << endl;

    return 0;
}w