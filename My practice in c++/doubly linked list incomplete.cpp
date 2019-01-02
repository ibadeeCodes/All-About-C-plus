#include<iostream>
using namespace std;
class node
{
	protected:
		int data,len;
		node *next,*pre,*head,*tail;
	public:	
	node()
	{
		 len=0;
		next=NULL;
		pre=NULL;
		head=NULL;
		tail=NULL;
	}
	void createnode(int a)
	{
		node *temp=new node;
		temp->pre=NULL;
		temp->data=a;
		temp->next=NULL;
		if(head=NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			temp->pre=tail;
			temp->next=NULL;
			tail=tail->next;
		}
	}
	void display()
	{
		node *temp=new node;
		temp=head;
		while(temp!=NULL)
		{
			
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
};
main()
{
	node n;
	n.createnode(66);
}
