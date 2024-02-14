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
node* takedata(){
	int data;
	cout<<"enter the elements of the linked list enter -1 when you are done"<<endl;
	cin>>data;
	node* head=NULL;
	node* tail=NULL;
	while(data!=-1){
		node* newnode=new node(data);
		if(head==NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail->next = newnode;
			tail=newnode;
		}
		cin>>data;
	}
	return head;
}
node* sortedinsert(node* head,int x){
     node* curr=head;
     node* prev=NULL;
     node* xxx=new node(x);
     if(head == NULL || head->data>=x)
     {
     	xxx->next=head;
     	return xxx;
	 }
     while(curr !=NULL && curr->data<x){
     	prev=curr;
     	curr=curr->next;
	 }
	 	 
		prev->next=xxx;
	 	xxx->next=curr;

return head;

}
node* display(node* head)
{
	if(head == NULL){
		cout<<"your liked li8st doesnt exists"<<endl;
		return 0;
	}
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}
int main()
{
   node* wasd = takedata();
   display(wasd);
   cout<<"The list after update is\n";
    wasd = sortedinsert(wasd , 2);
    display(wasd);
    return 0;
}

