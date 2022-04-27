#include "binary_search.h"

int *binary_search(int value, const int *arr, size_t length)
{
    int low;
    int mid;
    int high;

    low = 0;
    high = length - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == value)
            return ((int *)&arr[mid]);
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return (NULL);
}
