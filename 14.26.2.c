#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void update_string(char* str, int(*pf)(int));
void ToUpper(char* str);
void ToLower(char* str);
void Transpose(char* str); // TODO: add a new menu

//int main()
//{
//	char str1[30];
//	char str2[2];
//
//	printf("Enter a string\n>>");
//	/*scanf("%s", &str1);*/
//	gets(str1);
//	printf("Choose an option : \n");
//	printf("u) to upper\n");
//	printf("l) to lower\n");
//	scanf("%s", &str2);
//	
//	if (strcmp(str2, "u") == 0)
//		update_string(&str1, toupper);
//	else if (strcmp(str2, "l") == 0)
//		update_string(&str1, tolower);
//
//	printf("%s", str1);
//
//	return 0;
//}

int main()
{
	char options[] = { 'u', 'l', 't'};
	int n = sizeof(options) / sizeof(char);

	typedef void(*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper, ToLower, Transpose };

	printf("Enter a string\n>> ");

	char input[100];

	while (scanf("%[^\n]%*c", input) != 1)
		printf("Please try again.\n>> ");

	while (true)
	{
		printf("Choose an option : \n");
		printf("u) to upper\n");
		printf("l) to lower\n");
		printf("t) to transpose\n");

		char c;

		while (scanf("%[^\n]%*c", &c) != 1)
			printf("Please try again.\n>> ");

		bool found = false;

		for (int i = 0; i < n; ++i)
			if (options[i] == c)
			{
				(*(operations[i]))(input);
				found = true;
				break;
			}
		if (found)
			break;
		else
			printf("Wrong input, try again.\n");
	}
	printf("%s\n", input);

	return 0;
}

void ToUpper(char* str)
{
	update_string(str, toupper);
}

void ToLower(char* str)
{
	update_string(str, tolower);
}

void Transpose(char* str)
{
	while (*str)
	{
		if(islower(*str))
			*str = toupper(*str);
		if (isupper(*str))
			*str = tolower(*str);
		str++;
	}
}

void update_string(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}