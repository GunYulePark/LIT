#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void scan_print(void);

int main()
{
    scan_print();
    return 0;
}

void scan_print(void)
{
    int i;
    char First_name, Last_name, Location, Nationality;
    
    printf("Write your First_name and Last_name :");
    scanf("%s %s", First_name, Last_name);// scanf는 안에 있으면 안되는듯? 함수 안팎을 나돌아 다녀야 해서 그런가?
    printf("Write your Location and Nationality :");
    scanf("%s %s", Location, Nationality);
    
    for(i = 0; i < 20; ++i) 
        printf("*");

    printf("%s %s\n", First_name, Last_name);
    printf("%s, %s\n", Location, Nationality);

    for(i = 0; i < 20; ++i) 
    printf("*");
}