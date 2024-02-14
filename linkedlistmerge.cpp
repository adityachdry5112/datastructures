#include<iostream>
using namespace std;
class node{
  
    public:

    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail = NULL;
    while(data>0){
        if(head==NULL){
            node* newnode=new node(data);
            head=newnode;
            tail=newnode;
        }
        else{
            node* newnode=new node(data);
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
node* merge(node* head,node* tail)
{
	node* mergelist= new node(0);
	node* wasd = mergelist;
	while(head && tail){
		if(head->data<tail->data){
			wasd->next=head;
			head= head->next;
		}
		else{
			wasd->next=tail;
			tail=tail->next;
		}
		wasd=wasd->next;
	}
	if(head){
		wasd->next=head;
	}
	if(tail){
		wasd->next=tail;
	}
	return mergelist->next;
}
void display(node* head)
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
int main(){
    node* wasd;
    node* qwer;
    node* das;
    cout<<"enter the elements of first linked list enter negative when done\n";
    wasd=takeinput();
//    display(wasd);
    cout<<"enter the elements of second linked list enter negative when done\n";
    qwer=takeinput();
    das=merge(wasd,qwer);
    display(das);








}
