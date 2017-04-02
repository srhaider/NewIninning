#include "header.h"
#include<cstdlib>

ChainNode *ChainOperation::createChainNode(int elem)
{
	ChainNode *temp=new ChainNode(elem);
	return temp;
}

void ChainOperation::insertChainNode()
{
	int elem;
	cout<<"enter Value .:";
	cin>>elem;
	if(first == NULL)
	first=createChainNode(elem);

	else
	{
		ChainNode *q=first;
		while(q->link!=NULL)	
		q=q->link;
		q->link=createChainNode(elem);
	}	
}

void ChainOperation::displayNode()
{
		ChainNode *q=first;
		while(q!=NULL)	
		{
		cout <<q->data<<"->";
		q=q->link;
		//cout <<"kkkkk"<<endl;	
		}
		//cout <<"\n";	
}




int main()
{
ChainOperation obj;
int choice=0;

	while(1)
	{
		system("clear");	
		cout<<"Press 1 to Insert"<<endl;
		cout <<"Press 2 to Display"<<endl;
		cout <<"Press 3 to exit"<<endl;
		cout << "choice .:";
		cin >> choice;
		switch (choice)
		{	
			case INSERT_NODE:	
				system("clear");	
				obj.insertChainNode();
				break;
			case DISPLAY_NODE:
				obj.displayNode();
				break;
			case EXIT:
				exit(0);
			default:
				cout <<"\n"<<"Wrong Choice, Please try again"<<endl;
				break;
		}
	}
//obj.createChainNode();
//obj.displayNode();

return 0;
}

		
