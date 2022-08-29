#include <stdio.h>

#pragma warning (disable:4996)

int main1()
{
	int arr[10];
	FILE* f = fopen("numArray.bin", "w");
	if (!f)
	{
		printf("File error");
		exit(1);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("Please enter the %d number: ", i + 1);
		scanf("%d", &arr[i]);
	}
	fwrite(arr, sizeof(int), 10, f);
	fclose(f);
	return 0;
}