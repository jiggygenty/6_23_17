/*
C Program to Implement Quick Sort Using Randomization

This C program sorts a given array of integer numbers using randomized Quick sort technique.
It is comparison sort which works on divide and conquer technique. It is in-place partitioning algorithm and one of the fastest sorting techniques available till date. Average Time Complexity of this algorithm is O(nlog(n)).

Here is the source code of the C program to sort integers using randomized Quick sort technique. The C program is successfully compiled and run on a Linux system. The program output is also shown below.
-----------------
OUTPUT:
$ gcc randomizedquicksort.c -o randomizedquicksort
$ ./randomizedquicksort
Sorted array is : 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
------------

REPLACE ??? BY CORRECT CODE

*/

#include <math.h>
#include <stdlib.h>
#define MAX 100

void random_shuffle(int arr[])
{
    srand(time(NULL));
    int i, j, temp;
    for (i = MAX - 1; i > 0; i--)
    {
        j = rand()%(i + 1);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partion(int arr[], int p, int r)
{
    int pivotIndex = p + rand()%(r - p + 1); //generates a random number as a pivot
    int pivot;
    int i = p - 1;
    int j;
    pivot = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[r]);
    for (j = p; j < r; j++) //
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }

    }
    swap(&arr[i+1], &arr[r]);
    return (i+1);
}

void quick_sort(int arr[], int p, int q)
{
    int j;
    if (p < q)
    {
        j = partion(arr, p, q);
        quick_sort(arr, p, j-1);
        quick_sort(arr, j+1, q);
    }
}
int main()
{
    int i;
    int arr[MAX];
    for (i = 0; i < MAX; i++)
        arr[i] = i;
    random_shuffle(arr); //To randomize the array
    quick_sort(arr, 0, MAX-1); //function to sort the elements of array
    for (i = 0; i < MAX; i++)
         printf("%d \n", arr[i]);
    return 0;
}

