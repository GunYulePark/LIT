#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int int_arr[30]; //compile할 때 size 정해짐
    int *int_ptr = NULL; // runtime에 size 정해짐(동적할당) 
    int_ptr = (int*)malloc(sizeof(int) * 30); // int_ptr[0]

    printf("Size of array = %zu bytes\n", sizeof(int_arr));
    printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));

    return 0;

}