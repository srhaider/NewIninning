#include<iostream>
#include<cstring>
using namespace std;

class TreeLetterChain;

class TreeLetterNode{
	friend class TreeLetterChain;
	private:
	int Data;
	TreeLetterNode *Left;
	TreeLetterNode *Right;
};

class TreeLetterChain
{
	public:
		TreeLetterChain()	{
		First=new TreeLetterNode;
		//First->Data=100;	
		cout <<"Btree Constructor Called "<<endl;		}
		~TreeLetterChain(){}
		void Insert();
	private:
		TreeLetterNode *First;
};
void TreeLetterChain::Insert()
{
	char ch='y';
	TreeLetterNode *temp,*currentPos;
	temp=First=currentPos=NULL;
	temp=new TreeLetterNode;

	while(ch=='y' || ch== 'Y')
	{
		temp=new TreeLetterNode;
		if(First==NULL){
		First=temp;
		First->Left=NULL;
		First->Right=NULL;
		}
		else
		{
			currentPos=First;
			while(currentPos!=NULL)
			{
			if(temp->Data>currentPos->Data)
			currentPos=currentPos->Right;
			
			else
			currentPos=currentPos->Left;
			}
				if(temp->Data>currentPos->Data)
				currentPos->Right=temp;
				else
				currentPos->Left=temp;
			
		}
		cout <<"If you want to continue press y/Y .:";
	}

}
int main()
{
	char ch='y';
	
	TreeLetterChain obj;
	obj.Insert();

	
	//temp->Data=101;

return 0;
}
