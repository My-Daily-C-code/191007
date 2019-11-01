#include <stdio.h> 
#pragma error (disable: 4996)

int main()
{
	FILE * fp = fopen("my story.txy", "wt");
	fputs("#Favorite food: steak\n", fp);
	fputs("#The hobby is: reading books\n", fp);
	fclose(fp);
	return  0;
}