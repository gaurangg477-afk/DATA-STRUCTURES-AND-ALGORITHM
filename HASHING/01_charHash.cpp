/*
    Problem: Character Frequency Using Hashing

    Description:
    - Given a lowercase alphabetic string, answer multiple
      character frequency queries efficiently using hashing.
    - The hash array stores the frequency of each
      lowercase character ('a' to 'z').

    Approach:
    1. Read the input string.
    2. Create a hash array of size 26.
    3. Traverse the string and increment the frequency
       of each character.
    4. Read the number of queries.
    5. For each query, print the frequency of the
       requested character.

    Note:
    - This implementation assumes the input string
      contains only lowercase English letters ('a' to 'z').

    Time Complexity:
    Building Hash Array : O(N)

    Each Query:
    O(1)

    Total:
    O(N + Q)

    Space Complexity:
    O(26)

    Example:

    Input:
    String:
    programming

    Queries:
    3

    g
    r
    z

    Output:
    Frequency of g is: 2
    Frequency of r is: 2
    Frequency of z is: 0
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
    cout << "Enter your string: \n";
    getline(cin, str);

    // Hash array for lowercase letters
    int hash[26] = {0};

    // Build frequency table
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
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

        cout << "Frequency of " << ch
             << " is: " << hash[ch - 'a'] << endl;
    }

    return 0;
}