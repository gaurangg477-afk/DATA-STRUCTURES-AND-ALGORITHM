/*
    Problem: Print Numbers from 1 to N Using Recursion

    Description:
    - Given a positive integer N, print all numbers
      from 1 to N using recursion.
    - This program demonstrates the basic concept of
      recursive function calls and base conditions.

    Approach:
    1. Start recursion with the current number as 1.
    2. Print the current number.
    3. Recursively call the function for the next number.
    4. Stop recursion when the current number exceeds N.

    Base Condition:
    - If currentNumber > N, terminate recursion.

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
// Function: printNumbers
// Purpose : Prints numbers from 1 to N using recursion.
//
// Parameters:
// currentNumber -> Current number to print
// limit         -> Ending number (N)
//---------------------------------------------------------
void printNumbers(int currentNumber, int limit)
{
    // Base Case
    if (currentNumber > limit)
    {
        return;
    }

    // Print current number
    cout << currentNumber << endl;

    // Recursive Call
    printNumbers(currentNumber + 1, limit);
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

    // Start recursion
    printNumbers(1, n);

    return 0;
}