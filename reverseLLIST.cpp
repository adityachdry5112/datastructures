#include<iostream>
using namespace std;
class node{
	public :
	int data;
	node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};
node* inpdata(){
	int data;
	cin>>data;
	node* head=NULL;
	node* tail=NULL;
	while (data>0){
		node* newnode= new node(data);
		if(head==NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else{
			tail->next=newnode;
			tail=newnode;
		}
		cin>>data;
	}
	return head;
}
node* display(node* head)
{
	if(head==NULL){
		return 0;
	}
	while(head!=NULL){
		cout<<head->data<<"--";
		head=head->next;
	}
	cout<<"nullptr"<<endl;
}
node* reverse(node* head){
	node* p = head;
	node* q = NULL;
	node* r = NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
	return head;
}
int main()
{
    node* wasd =  inpdata();
    display(wasd);
    cout<<"after running the function"<<endl;
    wasd=reverse(wasd);
    display(wasd);
}

