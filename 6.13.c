#include <stdio.h>

int main()
{
    int code = 0;
    int secret_code = 7894;

    do
    {
        printf("Enter secret code : ");
        scanf("%d", &code);
    }
    while (code != secret_code);

    printf("Good!");

    return 0;
}
