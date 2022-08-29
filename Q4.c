#include <stdio.h>

#pragma warning (disable:4996)

int main4()
{
	int arr[10] = {2,4,6,8,10,12,14,16,18,20};
	FILE* f = fopen("Q4.bin", "w");
	if (!f)
	{
		printf("File error");
		exit(1);
	}
	fwrite(arr, sizeof(int), 10, f);
	fclose(f);
	return 0;
}