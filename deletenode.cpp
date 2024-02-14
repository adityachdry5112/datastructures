#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};
display(node* head)
{
	node* wasd=head;
	while(wasd!=NULL){
		cout<< wasd->data<<endl;
		wasd=wasd->next;
	}
}
node* takedata(){
	int data;
	cout<<"enter the linked list\n";
	cin>>data;
	node* head=NULL;
	node* tail=NULL;
	while(data!=-1)
	{
		node* newnode=new node(data);
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else{
			tail->next= newnode;
			tail= newnode;
		}
		cin>>data;
	}
	return head;
}
node* deletenode(node* head,int pos){
	if(pos==1){
		node* temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	node* prev = NULL;
	node* curr = head;
	node* xxx = NULL;
	int count=1;
	while(count < pos)
	{
		prev=curr;
		curr = curr->next;
		count+=1;
	}
	if(count==pos)
	{
		prev->next=curr->next;
		delete curr;
	}
	return head;
}
int main()
{
    node* head = takedata();
    head = deletenode(head, 1);
    display(head);
    return 0;
}

