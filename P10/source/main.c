#include<stdio.h>
#include<stdlib.h>

void cubebyrefrence(int *nptr);

int main(void)
{
	int number = 5;
	printf("the original value of number is %d", number);

	cubebyrefrence(&number);

	printf("\nthe new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubebyrefrence(int *nptr)
{
	*nptr = *nptr * *nptr **nptr;
}