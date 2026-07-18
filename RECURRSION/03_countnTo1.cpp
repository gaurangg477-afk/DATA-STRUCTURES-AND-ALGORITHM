/*
    Problem: Print Numbers from N to 1 Using Recursion

    Description:
    - Given a positive integer N, print all numbers
      from N down to 1 using recursion.
    - This program demonstrates recursive function calls
      with a simple base condition.

    Approach:
    1. Take the input value N.
    2. Print the current number.
    3. Recursively call the function with (N - 1).
    4. Stop recursion when N becomes less than 1.

    Base Condition:
    - If N < 1, terminate recursion.

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)
    (Recursive call stack)

    Example:

    Input:
    Enter a number: 5

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
    // Stop recursion when the number becomes less than 1.
    if (currentNumber < 1)
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
    cout << "Enter the number from which you want backward counting: ";
    cin >> n;

    // Start recursive printing
    printReverseCounting(n);

    return 0;
}