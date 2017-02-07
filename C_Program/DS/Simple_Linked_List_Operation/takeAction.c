#include"header.h"


void takeAction(uint8_t choice, struct Node *temp)
{
	switch(choice)
	{
		case USER_WANT_TO_INSERT:
				//Head=insert_node_into_list(HEAD);
					fprintf(stdout,"Hello\n");
		default:
				fprintf(stdout,"<<< Wrong Choice, Please insert correctly >>> \n");
				break;
	}
		
	return;
}