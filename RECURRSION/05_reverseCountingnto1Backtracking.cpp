/*
    Problem: Print Numbers from N to 1 Using Recursion

    Description:
    - Given a positive integer N, print all numbers
      from N down to 1 using recursion.
    - The current number is printed before making the
      recursive call, resulting in reverse counting.

    Approach:
    1. Print the current number.
    2. Recursively call the function with (N - 1).
    3. Continue until N becomes 0.

    Base Condition:
    - If N == 0, stop recursion.

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)
    (Recursive call stack)

    Example:

    Input:
    5

    Output:
    5
    4
    3
    2
    1
*/

#include <iostream>

using namespace std;

//---------------------------------------------------------
// Function: printReverseCounting
// Purpose : Prints numbers from N to 1 using recursion.
//
// Parameter:
// currentNumber -> Current number to print
//---------------------------------------------------------
void printReverseCounting(int currentNumber)
{
    // Base Case
    if (currentNumber == 0)
    {
        return;
    }

    // Print current number
    cout << currentNumber << endl;

    // Recursive Call
    printReverseCounting(currentNumber - 1);
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

    // Start recursive reverse counting
    printReverseCounting(n);

    return 0;
}