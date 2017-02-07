#include"header.h"


uint8_t askUser_Choice()
{
uint8_t ch;

fprintf(stdout,"<<< To Insert Node press 1 >>>\n");
fprintf(stdout,"<<< To Delete Node press 2 >>>\n");
fprintf(stdout,"<<< To Delete last node 3 >>>\n");
fprintf(stdout,"<<< To Delete Node as per choice 4 >>>\n");
fprintf(stdout,"<<< To Display LIST press 5 >>>\n");
fprintf(stdout,"<<< To Print Reverse of List press 6 >>>\n");
fprintf(stdout,"<<< To Reverse the List press 7 >>>\n");

fprintf(stdout,"Please Enter you choice as per given instruction.:");
fscanf(stdin,"%c",&ch);


return ch;
}
