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
node* inpdata(int s[5]){
	
//	cin>>a[0];
	node* head=NULL;
	node* tail=NULL;
	int i;
	for(i=0;i<5;i++){
		node* newnode=new node(s[i]);
		if(head==NULL){
			head=newnode;
			tail=newnode;
			
		}
		else{
			tail->next=newnode;
			tail=newnode;
		}
//		cin>>a[i];
	}
	return head;
}
node* concatinate(node* wasd,node* xxx)
{
	node* a=wasd;
	node* b=xxx;
	while(a->next!=NULL)
	{
	   a=a->next;	
	}
	a->next=b;
	return wasd;
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
int main()
{
    int A[]={1,2,3,4,5};
    int B[]={6,7,8,9,10};
    node* asd=inpdata(A);
    node* wasd=inpdata(B);
    wasd=concatinate(asd,wasd);
//    display(asd);
    display(wasd);
}

