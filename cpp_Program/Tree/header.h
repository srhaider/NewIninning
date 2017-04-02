#ifndef __HEADER__
#define __HEADER__


#include<iostream>
#include<cstring>
#include<cstdlib>

#define INSERT_NODE 1
#define DISPLAY_NODE 2
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
	void displayNode();
	ChainNode* createChainNode(int);
	void insertChainNode();
private:
	ChainNode *first;
};

