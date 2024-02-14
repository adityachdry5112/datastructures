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
//node* reverse(node* head){
//	node* p = head;
//	node* q = NULL;
//	node* r = NULL;
//	while(p!=NULL){
//		r=q;
//		q=p;
//		p=p->next;
//		q->next=r;
//	}
//	head=q;
//	return head;
//}
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
node* merge(node* head,node* tail){
	
	node* a = head;
	node* b = tail;
	int c = a->data;
	int d = b->data;
	cout<<c<<d<<endl;
	if(c<d)
	{
	
		node* ll=head;
		node* current1=head;
		node* current2=tail;
		node* temp1=current1->next;
		node* temp2=current2->next;
		
		
		while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data < current2->data){
			temp1=temp1->next;
			current1=current1->next;
		}
		if(temp1->data > current2->data)
		{
			current1->next = current2;
			current1=current2;
			current2=temp1;
			temp2=current2->next;
			temp1=current1->next;
		}
		
	}
	
	return ll;
	}
	else
	{
		node* ll=tail;
		node* current1=tail;
		node* current2=head;
		node* temp1=current1->next;
		node* temp2=current2->next;
		
		
		while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data < current2->data){
			temp1=temp1->next;
			current1=current1->next;
		}
		if(temp1->data > current2->data)
		{
			current1->next = current2;
			current1=current2;
			current2=temp1;
			temp2=current2->next;
			temp1=current1->next;
		}
		
	}
	
	return ll;
	}
	
	
	
}
int main()
{
	int arrr[]={0,2,4,6,8};
	int arr[]={1,3,5,7,9};
	node* ll1=inpdata(arr);
	node* ll2=inpdata(arrr);
	node* lll=merge(ll1,ll2);
	display(lll);
}

