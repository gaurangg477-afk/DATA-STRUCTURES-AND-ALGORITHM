/*
    Problem: Character Frequency Using Hashing (ASCII)

    Description:
    - Given a string, answer multiple character frequency
      queries efficiently using hashing.
    - This implementation supports all ASCII characters
      by using a hash array of size 256.

    Approach:
    1. Read the input string.
    2. Create a hash array of size 256.
    3. Traverse the string and increment the frequency
       of each character.
    4. Read the number of queries.
    5. For each query, print the frequency of the
       requested character.

    Note:
    - Supports:
        • Uppercase letters (A-Z)
        • Lowercase letters (a-z)
        • Digits (0-9)
        • Spaces
        • Special characters

    Time Complexity:
    Building Hash Array : O(N)

    Each Query:
    O(1)

    Total:
    O(N + Q)

    Space Complexity:
    O(256)

    Example:

    Input:
    String:
    Hello World!

    Queries:
    4

    H
    l
    o
    !

    Output:
    Frequency of H is: 1
    Frequency of l is: 3
    Frequency of o is: 2
    Frequency of ! is: 1
*/

#include <iostream>
#include <string>

using namespace std;

//---------------------------------------------------------
// Driver Function
//---------------------------------------------------------
int main()
{
    string str;

    // Input string
    cout << "Enter your string: ";
    getline(cin, str);

    // Hash array for all ASCII characters
    int hash[256] = {0};

    // Build frequency table
    for (int i = 0; i < str.size(); i++)
    {
        hash[(unsigned char)str[i]]++;
    }

    int query;

    // Input number of queries
    cout << "Enter number of queries: ";
    cin >> query;

    // Answer each query
    while (query--)
    {
        char ch;

        cout << "Enter character to check: ";
        cin >> ch;

        cout << "Frequency of '" << ch
             << "' is: " << hash[(unsigned char)ch] << endl;
    }

    return 0;
}