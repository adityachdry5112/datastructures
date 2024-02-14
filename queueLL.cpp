
#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
};
class queue{
	public:
		node* front;
		node* rear;
		queue(){
			front=NULL;
			rear=NULL;
		}

void enqueue(int x){
	node* temp=new node();
	temp->data=x;
	temp->next=NULL;
	if(front==NULL && rear == NULL){
		rear=front=temp;
	}
	rear->next=temp;
	rear=temp;
}
void dequeue(){
	if(front==NULL){
		return;
	}
	if(front==rear){
		front=rear=NULL;
	}
	node* temp=front;
	front=temp->next;
	int a=temp->data;
	delete temp;
	cout<<"The Element Dequed Is : "<<a<<endl;
}
int peek(){
	if(front==NULL){
		return 0;
		cout<<"khali hai BC\n";
	}
	return front->data;
}
bool isempty(){
	if(front==NULL){
		return true;
	}
	return false;
}
};
int main()
{
	queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.dequeue();
}

