/*
    Problem: Print Name N Times Using Recursion

    Description:
    - Given a user's name and an integer N,
      print the name exactly N times using recursion.
    - The solution demonstrates the basic concept of
      recursive function calls with a base condition.

    Approach:
    1. Read the value of N.
    2. Read the user's name.
    3. Call the recursive function starting from 1.
    4. Print the name and recursively call the function
       until the counter exceeds N.

    Base Condition:
    - Stop recursion when currentCount > totalCount.

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)
    (Recursive call stack)

    Example:

    Input:
    Enter number of times: 3
    Enter your name: Gaurang

    Output:
    Gaurang
    Gaurang
    Gaurang
*/

#include <iostream>
#include <string>

using namespace std;

//---------------------------------------------------------
// Function: printName
// Purpose : Prints the given name N times using recursion.
//
// Parameters:
// currentCount -> Current recursion count
// totalCount   -> Total number of times to print
// userName     -> Name to be printed
//---------------------------------------------------------
void printName(int currentCount, int totalCount, string userName)
{
    // Base Case
    // Stop recursion once the count exceeds N.
    if (currentCount > totalCount)
    {
        return;
    }

    // Print the name
    cout << userName << endl;

    // Recursive Call
    printName(currentCount + 1, totalCount, userName);
}

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int totalCount;
    string userName;

    // Input total number of times
    cout << "Enter how many times you want to print your name: ";
    cin >> totalCount;

    // Input user's name
    cout << "Enter your name: ";
    cin >> userName;

    // Start recursion
    printName(1, totalCount, userName);

    return 0;
}