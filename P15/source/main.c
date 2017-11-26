#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void bubblesort(int *const a[], const int size);

int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int i;

	printf("data items in origin order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	bubblesort(a, SIZE);

	printf("\ndata items in ascending order\n");
	for (i = 0; i < SIZE; i++){
		printf("%4d", a[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}

void bubblesort(int *const a[], const int size)
{
	void swap(int *elementptr, int *elementptr2);
	int pass;
	int j;

	for (pass = 0; pass < size - 1; pass++){
		for (j = 0; j < size - 1; j++){
			if (a[j]>a[j + 1]){
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

void swap(int *elementptr, int *elementptr2)
{
	int hold = *elementptr;
	*elementptr = *elementptr2;
	*elementptr2 = hold;
}