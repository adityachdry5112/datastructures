#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}	
};
node* takeinput(){
	int data;
	cout<<"Enter the elements of linked list ; -1 when done"<<endl;
	cin>>data;
	node* head=NULL;
	node* tail= NULL;
	while(data>0)
	{
		if(head==NULL)
		{
			node* newnode=new node(data);
			head=newnode;
			tail=newnode;
		}
		else{
			node* newnode=new node(data);
			tail->next=newnode;
			tail=tail->next;
		}
		tail->next=head;
		cin>>data;
	}
	return head;
}
void display(node* head)
{
	node* wasd = head;
	cout<<"head--";
	do{
		cout<<wasd->data<<"--";
		wasd=wasd->next;
	}while(wasd!=head);
	cout<<"head"<<endl;
}
int main()
{
   node* asd=takeinput();
   display(asd);
}

