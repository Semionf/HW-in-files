#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main6()
{
	int num, len, totalValue=0;
	printf("Please enter the size of the array: ");
	scanf("%d", &num);
	struct Item {
		int val;
		char name[100];
		short answer;
	};
	struct Item* arr = malloc(sizeof(struct Item) * num);
	struct Item* ptr = arr;
	FILE* f = fopen("Q6.bin", "w");
	if (!f || !arr)
	{
		printf("Error");
		exit(1);
	}
	for (int i = 0; i < num; i++)
	{
		printf("Please enter a value: ");
		scanf("%d", &arr->val);
		printf("Please enter a name: ");
		scanf(" %s", arr->name);
		len = strlen(arr->name);
		printf("%s", arr->name);
		arr->answer = 0;
		if (arr->val > 10 && len > 5)
		{
			arr->answer = 1;
		}
		totalValue += arr->val;
		arr++;
	}
	fwrite(ptr, sizeof(struct Item), num, f);
	printf("The total value is: %d", totalValue);
	fclose(f);
	free(ptr);
	return 0;
}