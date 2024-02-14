#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
int isempty(node* top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(node* top){
	 node* n= new node;
	if(n==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
node* push(node* top,int x){
	if(isfull(top)){
		cout<<"ma chudae duniya\n";
	}
	else{
		node* n = new node;
	n->data=x;
    n->next=top;
	top=n;
	}
	return top;
}
int pop(node* &top){
	if(isempty(top)){
		return 0;
	}
    else{
    	node* n=top;
    	top=top->next;
    	int x= n->data;
    	delete n;
    	return x;
	}	
}
int main()
{
   node* top=NULL;
   top=push(top,23);
   top=push(top,12);
  top= push(top,34);
   int a=pop(top);
   cout<<a;
}

