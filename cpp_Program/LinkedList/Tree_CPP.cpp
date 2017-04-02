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

void ChainOperation::insertMiddleList()
{

}

void ChainOperation::displayReverseList()
{

}

void ChainOperation::deleteLastNode()
{


}

void ChainOperation::deleteFirstNode()
{


}
uint8_t ChainOperation::countListSize()
{
	ChainNode *q=first;
	uint8_t size_of_List=0;
	if(q==NULL)
	{
		cout <<"List is empty, Please try after proper Node Insertion<F4>"<<endl;
		return size_of_List;
	}	

	while(q!=null)
	{
	size_of_List++;
	q=q->link;
	}
	return size_of_List;
}
void ChainOperation::deleteMiddleNode()
{
	uint8_t choice=NULL;
	cout<<"Please enter the location you want to delete .:";
	cin >> choice;
	if(countListSize()|| )
	ChainNode *temp;
	
}

void ChainOperation::displayNode()
{
	ChainNode *q=first;
		
	if(q==NULL)
	{
	cout <<"List is empty, Please try after proper Node Insertion<F4>"<<endl;
	return ;
	}
		while(q!=NULL)	
		{
		cout <<q->data<<"->";
		q=q->link;
		}
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
		cout <<"Press 3 to Display Reverse List"<<endl;
		cout <<"Press 4 to Insert middle of List"<<endl;
		cout <<"Press 7 to Delete Last node from List"<<endl;
		cout <<"Press 5 to Delete First node from List"<<endl;
		cout <<"Press 6 to Delete Middle Node from List"<<endl;
		cout <<
		cout <<"Press 0 to exit"<<endl;
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
			case DISLAY_REVERSE_LIST:
				obj.displayReverseList();
				break;
			case INSERT_MIDDLE_OF_LIST:
				obj.insertMiddleList();
				break;
			case DELETE_LAST_NODE:
				obj.deleteLastNode();
				break;
			case DELETE_FIRST_NODE:
				obj.deleteFirstNode();
				break;
			case DELETE_MIDDLE_NODE:
				obj.deleteMiddleNode();
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

		
