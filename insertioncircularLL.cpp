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
node* insert(node* head,int pos,int x){
	node* wasd= head;
	if(pos<0){
		return 0;
	}
	if(pos == 0){
		node* t = new node(x);
		if(head==NULL){
			head=t;
			head->next=head;
		}
		else{
			head->next=t;
			t->next=head;
			head=t;
		}
	}
	else{
		node* t = new node(x);
		for(int i=1;i<pos;i++){
			wasd=wasd->next;
		}
		t->next=wasd->next;
		wasd->next=t;
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
   asd=insert(asd,0,69);
   display(asd);
}
