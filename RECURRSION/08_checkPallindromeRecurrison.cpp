/*
    Problem: Check Whether a String is a Palindrome
             Using Recursion (User-Defined Size)

    Description:
    - Given a string and its maximum size, determine
      whether the string is a palindrome using recursion.
    - The program compares characters from both ends
      towards the center.

    Approach:
    1. Read the maximum size of the string.
    2. Read the string from the user.
    3. Find the actual length of the string.
    4. Compare the first and last characters.
    5. Recursively check the remaining substring.

    Base Condition:
    - If start >= end, the string is a palindrome.

    Time Complexity:
    O(N)

    Space Complexity:
    O(N)
    (Recursive call stack)

    Example:

    Input:
    Enter maximum size: 10
    Enter the string: madam

    Output:
    String is a Palindrome
*/

#include <iostream>
#include <cstring>

using namespace std;

//---------------------------------------------------------
// Function: checkPalindrome
// Purpose : Checks whether the given string is a
//           palindrome using recursion.
//
// Parameters:
// str   -> Character array
// start -> Starting index
// end   -> Ending index
//---------------------------------------------------------
void checkPalindrome(char str[], int start, int end)
{
    // Base Case
    if (start >= end)
    {
        cout << "String is a Palindrome";
        return;
    }

    // Characters do not match
    if (str[start] != str[end])
    {
        cout << "String is not a Palindrome";
        return;
    }

    // Recursive Call
    checkPalindrome(str, start + 1, end - 1);
}

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    int size;

    cout << "Enter the maximum size of the string: ";
    cin >> size;

    // +1 for the null character '\0'
    char str[size + 1];

    cout << "Enter the string: ";
    cin >> str;

    // Find actual string length
    int length = strlen(str);

    // Check palindrome
    checkPalindrome(str, 0, length - 1);

    return 0;
}