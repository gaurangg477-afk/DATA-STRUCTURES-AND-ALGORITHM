/*
    Problem: Print Numbers from 1 to N Using Backtracking (Recursion)

    Description:
    - Given a positive integer N, print all numbers
      from 1 to N using recursion and backtracking.
    - Instead of printing before the recursive call,
      the number is printed after the recursive call,
      demonstrating the concept of backtracking.

    Approach:
    1. Continue making recursive calls until N becomes 0.
    2. The recursive calls reach the base case.
    3. While returning from recursion (backtracking),
       print the current number.
    4. This naturally prints numbers from 1 to N.

    Base Condition:
    - If N == 0, terminate recursion.

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)
    (Recursive call stack)

    Example:

    Input:
    Enter a number: 5

    Output:
    1
    2
    3
    4
    5
*/

#include <iostream>

using namespace std;

//---------------------------------------------------------
// Function: printCountingBacktracking
// Purpose : Prints numbers from 1 to N using recursion
//           and backtracking.
//
// Parameter:
// currentNumber -> Current recursive value
//---------------------------------------------------------
void printCountingBacktracking(int currentNumber)
{
    // Base Case
    if (currentNumber == 0)
    {
        return;
    }

    // Recursive Call
    printCountingBacktracking(currentNumber - 1);

    // Executed while returning from recursion
    // (Backtracking Step)
    cout << currentNumber << endl;
}

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int n;

    // Input value of N
    cout << "Enter a number: ";
    cin >> n;

    // Start recursive backtracking
    printCountingBacktracking(n);

    return 0;
}