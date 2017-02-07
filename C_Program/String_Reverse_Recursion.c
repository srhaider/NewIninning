#include<stdio.h>


void Reverse(char str[])
{
	if(*str=='\0')
	return;
	Reverse(str+1);
	printf("%c",*str);
}


int main()
{
	int i=0;
	char *str="Raza";
	Reverse(str);
	printf("\nHaider\n");

return 0;
}
