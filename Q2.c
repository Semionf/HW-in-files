#include <stdio.h>

#pragma warning (disable:4996)

int main2()
{
	int arr[4],arr2[8];
	int sum1 = 0, sum2 = 0;
	FILE* f = fopen("biggerArray.bin", "w");
	if (!f)
	{
		printf("File error");
		exit(1);
	}
	printf("Please enter numbers for the first array:\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d: ", i + 1);
		scanf("%d", &arr[i]);
		sum1 += arr[i];
	}
	printf("Please enter numbers for the first array:\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%d: ", i + 1);
		scanf("%d", &arr2[i]);
		sum2 += arr2[i];
	}
	if (sum1 > sum2)
	{
		fwrite(arr, sizeof(int), 4, f);
	}
	else {
		fwrite(arr2, sizeof(int), 8, f);
	}
	fclose(f);
	return 0;
}