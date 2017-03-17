#include<stdio.h>


int main()
{
	int i=0;
	const char *a="Hello";
	//a[3]='d';
	//char *p;
	//p=a;
	//a[3]='w';
	for(i=0;*a!='\0';i++)
	printf("%c",*a++);
	return 0;
}
