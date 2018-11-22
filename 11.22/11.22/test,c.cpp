#define _GRT_SECUSE_NO_WARNINGS 1


//Ä£ÄâÊµÏÖstrcpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* mystrcpy(char* dest ,const char* str)
{
	char* ret = dest;
	assert(dest != NULL);//¶ÏÑÔ
	assert(str != NULL);
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[10] = { 0 };
	char arr2[10] = "abcdef";
	mystrcpy(arr1,arr2);
	printf("%s", arr1);
	system("pause");
	return 0;
}