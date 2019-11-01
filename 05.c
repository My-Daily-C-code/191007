#include <stdio.h>
#include <string.h>
long GetFileSize(FILE*fp);
//#pragma error (disable: 4996)
#define CRT_SECURE_NO_WARNNINGS

int main()
{
	char str[100];
	FILE *fp = fopen("ABC.txt", "rt"); // ABC.txt�� �޸������� ���� �� ��
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("sizeof file: %ld\n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("sizeof: %ld\n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	fclose(fp);
	return 0;
}

long GetFileSize(FILE*fp)
{
	long fpos;
	long fsize;
	fpos = ftell(fp); // ���� ��ġ ������ ���� ���

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET); // ���� ��ġ ������ ���� ����
	return fsize;
}