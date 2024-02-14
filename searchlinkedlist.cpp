#include<iostream>
using namespace std;
class Node{
	public :
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			next=NULL;
		}
};
Node* takeinp(int data){
	Node* head=NULL;
	Node* tail=NULL;
	while(data!=-1){
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
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->next;
	}
}
Node* linearsearch(Node* head,int key){
	Node* previous=NULL;
	Node* current= head;
	while(head!=NULL)
	{
		if(current->data==key)
		{
			if(previous!=NULL){
				previous->next=current->next;
			current->next=head;
			head=current;
			cout<<"the element is found "<<current->data<<endl;
			}
			return head;
			
		}
		previous=current;
		current=current->next;
	}
}

int main()
{
   int data;
   cout<<"enter the first element of the linked list\n";
   	cout<<"enter -1 when you are done with your linked list"<<endl;
   cin>>data;
   Node* head=takeinp(data);
   display(head);
   Node* wasd=linearsearch(head,69);
   cout<<"After running the program"<<endl;
   display(wasd);
}

