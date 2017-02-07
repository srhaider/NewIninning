#include<stdio.h>

int main()
{	
	int i;
	int *p=191;
//	p=&i;

/*	fprintf(stdout," i=%d \n",i);
	fprintf(stdout,"*p=%d \n ",*p);
	
	fprintf(stdout,"*p=%p (wit mod p)\n ",*p);
	
	fprintf(stdout," i=%d \n",i);
	fprintf(stdout," p=%d \n ",p);

	fprintf(stdout,"*p=%p (wit mod p)\n ",p);
*/

	fprintf(stdout," p=%x\n ",*p);
return 0;
}
