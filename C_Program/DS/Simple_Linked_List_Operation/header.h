#ifndef HEADER
#define HEADER

#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include"Macros.h"
#include"askUser_Choice.c"
#include"takeAction.c"

struct Node
{
	int data;
	struct Node *next;
};

#endif
