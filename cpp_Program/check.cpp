	char ch='y';
	TreeLetterNode *temp,*head,*currentPos;
	temp=head=currentPos=NULL;
	temp=new TreeLetterNode;

	while(ch=='y' || ch== 'Y')
	{
		temp=new TreeLetterNode;
		if(head==NULL){
		head=temp;
		head->Left=NULL;
		head->Right=NULL;
		}
		else
		{
			currentPos=head;
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
				currentPos->left=temp;
			
		}
		cout <<"If you want to continue press y/Y .:";
	}

