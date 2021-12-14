#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define	SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char* filename, const struct book* books, int n);
struct book* read_books(const char* filename, int* n_ptr);
//void read_books2(const char* filename, struct book** books, int* n);

int main()
{
	int temp;
	int n = 3;

	struct book* my_books = (struct book*)malloc(sizeof(struct book) * n);

	if (!my_books)
	{
		printf("Malloc failed");
		exit(1);
	}

	my_books[0] = (struct book){ "Book0", "author0" };
	my_books[1] = (struct book){ "Book1", "author1" };
	my_books[2] = (struct book){ "Book2", "author2" };

	print_books(my_books, n);

	printf("\nWriting to a file.\n");
	write_books("books.txt", my_books, n);
	free(my_books);
	n = 0;
	printf("Done.\n");

	printf("\nPress any key to read data from a file.\n\n");
	temp = _getch();

	my_books = read_books("books.txt", &n);
	print_books(my_books, n);
	free(my_books);
	n = 0;

	return 0;
}

void print_books(const struct book* books, int n)
{
	for (int i = 0; i < n; i++)
		printf("Book %d : \"%s\" written by \"%s\"\n", i, books[i].name, books[i].author);
}

void write_books(const char* filename, const struct book* books, int n)
{
	FILE* file = fopen(filename, "w");

	if (file == NULL)
	{
		fputs("Can't open file.", stderr);
		exit(1);
	}

	fprintf(file, "%d\n", n);

	for (int i = 0; i < n; ++i)
		fpritf(file, "%s\n%s\n", books[i].name, books[i].author);

	fclose(file);
}

struct book* read_books(const char* filename, int* n_ptr)
{
	FILE* file = fopen(filename, "r");
	if (file == NULL)
	{
		fputs("Can't open file.", stderr);
		exit(1);
	}

	int flag;
	flag = fscanf(file, "%d%*c", n_ptr);
	if (flag != 1) //1개 입력 받음
	{
		printf("File read faild");
		exit(1);
	}

	struct book* books = (struct book*)calloc(sizeof(struct book), * n_ptr);

	if (!books)
	{
		printf("Malloc() faild.");
		exit(1);
	}

	for (int i = 0; i < *n_ptr; ++i)
	{
		flag = fscanf(file, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

		if (flag != 2) // 2개 입력 받음
		{
			printf("File read faild");
			exit(1);
		}
	}
	
	fclose(file);

	return books;
}