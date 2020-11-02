#include <stdio.h>
#define SIZE 6
int main(void)
{
	int s[SIZE] = { 20, 10, 30 ,50, 60, 40 };
	int i, ex;
	for (i = SIZE-1; i > 0; i--)
	{
		for (int j = 0; j < SIZE-1; j++)
		{
			if (s[j] > s[j + 1])
			{
				ex = s[j+1];
				s[j+1] = s[j];
				s[j] = ex;
			}
		}
	}
	printf("{");
	for (i = 0; i < SIZE; i++)
		printf("%d ", s[i]);
	printf("}");
}