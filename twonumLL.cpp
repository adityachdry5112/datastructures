#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
node* takeinp(int a)
{
    node* head=NULL;
    node* tail=NULL;
    if(head==NULL)
    {
        node* newnode=new node(a);
        head=newnode;
        tail=newnode;
    }
    else{
        node* newnode=new node(a);
        tail->next=newnode;
    }
    cin>>a;
    
    return head;
}
node* sum(node* h1,node* h2)
{
    int carry=0;
    int sum=0;
    node* qwer;
    while(h1->data||h2->data||carry)
    {
        if(h1->data)
        {
            sum+=h1->data;
            h1=h1->next;
        }
        else if(h2->data){
            sum+=h2->data;
            h2=h2->next;
        }
        else if(carry)
        {
            sum+=carry;
        }
        carry=sum/10;
        qwer->data=sum%10;
        qwer=qwer->next;
        sum=0;
    }
    return qwer;
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
    int w;
    int s;
    cout<<"The first element of your linked list 1 is"<<endl;
    cin>>w;
    cout<<"Enter the rest of them"<<endl;
    node* h1=takeinp(w);
    cout<<"The first element of your linked list 2 is"<<endl;
    cin>>s;
    cout<<"Enter the rest of them"<<endl;
    node* h2=takeinp(s);
    display(h1);
    display(h2);
    node* wasd=sum(h1,h2);
    display(wasd);    
}