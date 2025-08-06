#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int hight)
{
    int pivot = arr[hight];
    int i = (low - 1);

    for (int j = low; j < hight; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[[j]]);
        }
    }

    swap(&arr[i + 1], arr[hight]);

    return (i + 1);
}