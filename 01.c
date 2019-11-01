#include <stdio.h>
#pragma error (disable: 4996)

int main()
{
	FILE*fp = fopen("my story.txt", "wt");
	fputs("#Name: Damian\n",fp);
	fputs("ID num: 960803- 149378383 \n", fp);
	fputs("#Phone num: 010-3327-0064 \n", fp);
	fclose(fp);

	return 0;
}