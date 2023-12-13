#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char n = 0;
	scanf("%c", &n);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		for (j = 0; j < 5-1-i; j++)
		{
			printf(" ");
		}for (j = 0; j <= i; j++)
		{
			printf("%c ", n);
		}
		printf("\n");
	}
	
	return 0;
}