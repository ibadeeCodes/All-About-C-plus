#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	private:
	int key;
	int data;
	int len;
	node *next;
	node *head,*tail;
	public:
	node()
	{
		len=0;
		head=NULL;
		tail=NULL;
	}
	void create_node()
	{
		int value;
		cout<<"enter value"<<endl;
		cin>>value;
		node *temp=new node;
		temp->data=value;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
			temp=NULL;	
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	}
		void display()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
			}
		}
		void insert_start()
		{
			int value;
			cout<<"enter value"<<endl;
			cin>>value;
			node *temp=new node;
			temp->data=value;
			temp->next=head;
			head=temp;
		}
		void insert_end()
		{
			int value;
			cout<<"enter value:"<<endl;
			cin>>value;
			node *temp=new node;
			temp->data=value;
			tail->next=tail;
			temp=tail;
		}
		void insert_position()
		{
			int pos,value;
			cout<<"insert value:"<<endl;
			cin>>value;
			cout<<"enter position:"<<endl;
			cin>>pos;
		    node *pre=new node;
		    node *cur=new node;
		    node *temp=new node;
		    cur=head;
		    for(int i=1;i<pos;i++)
		    {
		      pre=cur;
		      cur=cur->next;
		    }
		    temp->data=value;
		    pre->next=temp;	
		    temp->next=cur;
		}
		void length()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				len++;
				temp=temp->next;
			}		
			cout<<"length of the linked list is:"<<len;												                                                             
		}
		void delete_start()
		{
			node *temp=new node;
			temp=head;
			head=head->next;
			delete temp;
		}
		void delete_end()
		{
		    node *current=new node;
		    node *previous=new node;
		    current=head;
		    while(current->next!=NULL)
		    	{
		      		previous=current;
		      		current=current->next;	
		    	}
		    tail=previous;
		    previous->next=NULL;
		    delete current;
	    }
	  	void delete_position()
  		{
  			int pos;
  			cout<<"enter the position to be deleted:"<<endl;
  			cin>>pos;
		    node *current=new node;
		    node *previous=new node;
		    current=head;
		    for(int i=1;i<pos;i++)
		    {
		      previous=current;
		      current=current->next;
		    }
		    previous->next=current->next;
	  	}
};
main()
{
	int a;
	node n1;
	cout<<"1)Create Node.\n2Insert at start.\n3)Insert at end.\n4)Insert position."<<endl;
	cout<<"5)Display length.\n6)Display linked list.\n7)Delete start.\n8)Delete end."<<endl;
	cout<<"9)Delete by choice."<<endl;
	cout<<"10)Exit"<<endl;
	do
	{
	cout<<"enter your choice:"<<endl;
	cin>>a;
		switch(a)
		{
			case 1:
				{
					n1.create_node();
					break;
				}
			case 2:
				{
					n1.insert_start();
					break;
				}
			case 3:
			{
				n1.insert_end();
				break;
			}
			case 4:
			{
				n1.insert_position();
				break;
			}
			case 5:
			{
				n1.length();
				break;
			}		
			case 6:
			{
				n1.display();
				break;
			}
			case 7:
			{
				n1.delete_start();
				break;
			}	
			case 8:
			{
				n1.delete_end();
				break;
			}
			case 9:
			{
				n1.delete_position();
				break;
			}	
		}
	}while(a!=10);	
}
