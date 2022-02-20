#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning(disable:4996)

typedef struct book {
	char bookTitle[50];
	char bookAuthor[20];
	int bookPrice;
	int bookStock;
	int bookSale;
	char bookCode[9];
} BOOK;

BOOK* inBook(BOOK*, int*);
int compare(const void* a, const void* b);
void sellBook(BOOK*, int);
void outBook(BOOK*, int);
void searchBook(BOOK*, int);