#ifndef __HEADER__
#define __HEADER__


#include<iostream>
#include<cstring>
#include<cstdlib>

#define INSERT_NODE 1
#define DISPLAY_NODE 2
#define DISLAY_REVERSE_LIST 3
#define INSERT_MIDDLE_OF_LIST 4
#define DELETE_LAST_NODE 5
#define DELETE_FIRST_NODE 6
#define DELETE_MIDDLE_NODE 7
#define EXIT 0

#endif
using namespace std;

class ChainOperation;
class ChainNode
{
public:
	ChainNode(int elem)
	{	
		data=elem;
		cout <<"elemet assigned"<<endl;
		link=NULL;
		cout <<"NULL assigned"<<endl;
	}
private:
	int data;
	ChainNode *link;
	friend class ChainOperation;
};

class ChainOperation
{

public:

	ChainOperation() { 
	cout <<"ChainNode Operation Called"<<endl;
	first=NULL;
	}

	uint8_t countListSize();
	void displayNode();
	ChainNode* createChainNode(int);
	void insertChainNode();
	void insertMiddleList();
	void displayReverseList();
	void deleteLastNode();
	void deleteMiddleNode();
	void deleteFirstNode();
	
	
private:
	ChainNode *first;
};

