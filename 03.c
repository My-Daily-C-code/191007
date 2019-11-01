#include <stdio.h>
#pragma error (disable: 4996)

int main()
{
	char str[100];
	FILE *fp = fopen("mystory.txt", "rt");

	while (fgets(str, sizeof(str), fp) != NULL)
		print(str);
	fclose(fp);

	return 0;
}