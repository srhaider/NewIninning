#include<stdio.h>

void Binary_Conversion(int div)
{
	if(div<=0)
	return;
	
Binary_Conversion( div/2);
printf("%d",div%2);
}

int main()
{

Binary_Conversion(15);
return 0;
}
