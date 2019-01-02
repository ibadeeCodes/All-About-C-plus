#include<iostream>
using namespace std;
class node
{
	public:
		int data,len;
		node *next,*head,*tail;
	public:
		node()
		{
			head=NULL;
			tail=NULL;
			len=0;
		}
		void createnode(int a)
		{
		 	node *temp=new node;
		 	temp->data=a;
		 	temp->next=NULL;
		 	if(head==NULL)
		 	{
		 		head=temp;
		 		tail=temp;
			}
			else
			{
				tail->next=temp;
				tail=tail->next;	
			}
		}
		void deletenode(int pos)
		{
			node *current=new node;
			node *pre=new node;
			current=head;
			for(int i=1;i<pos;i++)
			{
				pre=current;
				current=current->next;
			}
		}
		void insertstart(int a)
		{
			node *temp=new node;
			temp->data=a;
			temp->next=head;
			head=temp;
		}
		void insertend(int a)
		{
			node *temp=new node;
			temp->data=a;
			tail->next=temp;
			tail=temp;
		}
		void display()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
				
			}
		}
		void length()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<endl;
				len++;
				temp=temp->next;
			}
			cout<<"total nodes are:"<<len;
		}
    void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }
    void over(int a,int b)
    {
    	node *temp=new node;
    	temp=head;
    	while(temp!=NULL)
    	{
    		temp=temp->next;
    		if(a==temp->data)
    		{
    			temp->data=b;
    			break;
			}
		}
	}


};
main()
{
	node n,m;
	n.createnode(60);
	n.createnode(39);
	n.insertstart(30);
	n.display();
	cout<<endl;
	m.createnode(2);
	m.createnode(4);
	n.over(60,35);
	n.display();
	cout<<endl;
	
	m.over(2,56);
	m.display();
	
}
