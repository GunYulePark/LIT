#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* xp, int *yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{   
    int arr[] = { 46, 5, 34, 54, 98 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    
    selectionSort(arr, n);
    
    printArray(arr, n);

    return 0;
}

void swap(int* xp, int *yp)
{
    int swap = *xp;
    *xp = *yp;
    *yp = swap;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
//ME) 잘 작동 되지만, n - 2가 변수로 들어가기 때문에 n > 3 이 되어야한다는 단점
// void selectionSort(int arr[], int n)
// {
//     int i, j, min_idx;
//     for(j = 0; j < n - 2; j++)
//     {
//         min_idx = j;

//         for(i = j; i < n - 1; i++)
//         {
//             if (arr[min_idx] < arr[i + 1])
//                 min_idx = min_idx;
//             else min_idx = i + 1;
//         }
//         swap(&arr[j], &arr[min_idx]);
//     }

//     printArray(arr, n);
// }

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;

        for(j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}