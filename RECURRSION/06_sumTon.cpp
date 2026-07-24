/*
    Problem: Sum of First N Natural Numbers Using Recursion

    Description:
    - Given a positive integer N, calculate the sum of
      the first N natural numbers using recursion.
    - This program demonstrates two recursive approaches:
        1. Parameterized Recursion
        2. Functional Recursion

    Approach 1: Parameterized Recursion
    - The running sum is passed as an additional parameter
      (accumulator) during each recursive call.
    - The final answer is returned when the base condition
      is reached.

    Approach 2: Functional Recursion
    - Every recursive call returns a value.
    - The final answer is built while the recursion
      unwinds (backtracking).

    Base Condition:
    - If N == 0, return the accumulated sum (Parameterized)
      or return 0 (Functional).

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)
    (Recursive call stack)

    Example:

    Input:
    Enter a number: 5

    Output:
    Sum of first 5 natural numbers is: 15
*/

#include <iostream>

using namespace std;

//---------------------------------------------------------
// Function: sumParameterized
// Purpose : Calculates the sum of the first N natural
//           numbers using Parameterized Recursion.
//
// Parameters:
// currentNumber -> Current number
// sum           -> Running sum (Accumulator)
//---------------------------------------------------------
int sumParameterized(int currentNumber, int sum = 0)
{
    // Base Case
    if (currentNumber == 0)
    {
        return sum;
    }

    // Recursive Call
    return sumParameterized(currentNumber - 1, sum + currentNumber);
}

//---------------------------------------------------------
// Function: sumFunctional
// Purpose : Calculates the sum of the first N natural
//           numbers using Functional Recursion.
//
// Parameter:
// currentNumber -> Current number
//---------------------------------------------------------
int sumFunctional(int currentNumber)
{
    // Base Case
    if (currentNumber == 0)
    {
        return 0;
    }

    // Recursive Call
    return currentNumber + sumFunctional(currentNumber - 1);
}

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Using Parameterized Recursion: "
         << sumParameterized(n) << endl;

    cout << "Using Functional Recursion: "
         << sumFunctional(n) << endl;

    return 0;
}