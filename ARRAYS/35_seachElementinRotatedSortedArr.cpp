/*
    Problem: Search in Rotated Sorted Array

    Description:
    - Given a sorted array that has been rotated at some pivot.
    - Search for a target element in the array.
    - Return its index if found, otherwise return -1.

    Example:

    Input:
    nums = [4,5,6,7,0,1,2]
    target = 0

    Output:
    4

    Approaches:

    1. Pivot + Binary Search
       - Find the pivot (smallest element).
       - Determine which sorted half contains the target.
       - Apply Binary Search on that half.

    2. Optimized Binary Search
       - No need to explicitly find pivot.
       - At every step, one half is guaranteed to be sorted.
       - Use the sorted half to decide where to search next.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/
// Function to find pivot index
int findPivot(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= arr[0])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return low;
}

// Standard Binary Search
int binarySearch(int arr[], int start, int end, int key)
{
    int low = start;
    int high = end;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

// Search using Pivot + Binary Search




//Optimised single Binary Search

int searchInRotatedArray(int arr[], int n, int key)
{
    int pivot = findPivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, key);
    }

    return binarySearch(arr, 0, pivot - 1, key);
}
int searchInRotatedArray(int nums[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        // Calculate middle index safely
        int mid = low + (high - low) / 2;

        // Target found
        if (nums[mid] == target)
        {
            return mid;
        }

        // Left half is sorted
        if (nums[low] <= nums[mid])
        {
            /*
                nums[low] ------ nums[mid]
            */

            if (target >= nums[low] && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            /*
                nums[mid] ------ nums[high]
            */

            if (target > nums[mid] && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}