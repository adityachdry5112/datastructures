#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		Node(int data)
		{
			this->data=data;
			next=NULL;
		}	
};
Node* takeinput(int data)
{
	Node* head=NULL;
	Node* tail=NULL;
	while(data!=-1)
	{
		if(head==NULL)
		{
			Node* newnode=new Node(data);
			head=newnode;
			tail=newnode;
		}
		else
		{
			Node* newnode=new Node(data);
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}
void display(Node* head)
{
	if (head==NULL)
	{
		return;
	}
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	int data;
   cout<<"Enter Element 1: "<<endl;
   cin>>data;
   Node* head=takeinput(data);
   cout<<"Linked list is: "<<endl;
   display(head);
}

