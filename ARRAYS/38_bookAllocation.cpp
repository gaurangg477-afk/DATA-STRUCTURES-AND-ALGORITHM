/*
    Question: Book Allocation Problem

    Problem Statement:
    Given an array where each element represents
    the number of pages in a book and an integer M
    representing the number of students.

    Allocate books such that:

    1. Each student gets at least one book.
    2. Books are allocated in contiguous order.
    3. Each book is assigned to only one student.
    4. Minimize the maximum number of pages
       assigned to any student.

    Return the minimum possible maximum pages.

    Example:

    Input:
    arr = [12, 34, 67, 90]
    students = 2

    Output:
    113

    Explanation:
    Student 1 -> [12, 34, 67] = 113 pages
    Student 2 -> [90] = 90 pages

    Maximum pages assigned = 113

    Approach:
    - Use Binary Search on the answer.
    - Search space:
        Low  = Maximum element in array
        High = Sum of all pages
    - For every mid:
        Check if allocation is possible.
    - If possible:
        Store answer and search left.
    - Otherwise:
        Search right.

    Time Complexity:
    O(N * log(Sum))

    Space Complexity:
    O(1)
*/

#include <iostream>
using namespace std;

/*
    Function:
    Checks whether books can be allocated
    with maxPages as the maximum pages
    assigned to a student.
*/
bool isPossible(int arr[], int n, int students, int maxPages)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        // Single book exceeds limit
        if (arr[i] > maxPages)
        {
            return false;
        }

        // Assign current book to same student
        if (pageSum + arr[i] <= maxPages)
        {
            pageSum += arr[i];
        }
        else
        {
            // Allocate to next student
            studentCount++;
            pageSum = arr[i];

            // Students exceeded
            if (studentCount > students|| arr[i]>maxPages)
            {
                return false;
            }
        }
    }

    return true;
}

/*
    Function:
    Returns minimum possible maximum pages.
*/
int allocateBooks(int arr[], int n, int students)
{
    // More students than books
    if (students > n)
    {
        return -1;
    }

    int low = arr[0];
    int high = 0;

    // Find maximum element and total sum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > low)
        {
            low = arr[i];
        }

        high += arr[i];
    }

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, n, students, mid))
        {
            ans = mid;

            // Try smaller answer
            high = mid - 1;
        }
        else
        {
            // Increase limit
            low = mid + 1;
        }
    }

    return ans;
}
int main()
{
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int arr[n];

    cout << "Enter pages in each book: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int students;

    cout << "Enter number of students: ";
    cin >> students;

    int answer = allocateBooks(arr, n, students);

    if (answer == -1)
    {
        cout << "Allocation is not possible." << endl;
    }
    else
    {
        cout << "Minimum Maximum Pages = " << answer << endl;
    }

    return 0;
}
