#include<stdio.h>


void Reverse_Numbers(int i)
{
if(i==10)
return;

Reverse_Numbers(i+1);
printf("%d",i);

}

int main()
{

Reverse_Numbers(1);



return 0;
}
