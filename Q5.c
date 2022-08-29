#include <stdio.h>

#pragma warning (disable:4996)

int main()
{
	int num;
	int sum = 0, numOfInt = 0;
	FILE* f = fopen("ques4.bin", "r");
	if (!f)
	{
		printf("File error");
		exit(1);
	}
	while (fread(&num, sizeof(int), 1, f))
	{
		printf("%d ", num);
		sum += num;
		numOfInt++;
	}
	printf("The sum is: %d", sum);
	printf("There were %d integers in the file. ",numOfInt);
	fclose(f);
	return 0;
}