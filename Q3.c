#include <stdio.h>
#include <string.h>
#include <conio.h>

#pragma warning (disable:4996)

int main3()
{
	FILE* f = fopen("file3.bin", "w");
	int len;
	if (!f)
	{
		printf("File error");
		exit(1);
	}
	struct Item {
		int val;
		char name[100];
		short answer;
	};
	struct Item list[3];
	for (int i = 0; i < 3; i++)
	{
		printf("Please enter a value: ");
		scanf("%d", &list[i].val);
		printf("Please enter a name: ");
		
		scanf(" %s", list[i].name);
		len = strlen(list[i].name);
		list[i].answer = 0;
		if (list[i].val > 10 && len > 5)
		{
			list[i].answer = 1;
		}
	}
	fwrite(list, sizeof(struct Item), 3, f);
	fclose(f);
	return 0;
}