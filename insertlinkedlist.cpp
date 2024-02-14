#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

node* takeinp() {
    int data;
    cin >> data;
    node* head = NULL;
    node* tail = NULL;

    while (data != -1) {
        node* newnode = new node(data);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }

        cin >> data;
    }

    return head;
}

void display(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

node* insert(node* head, int pos, int x) {
	node* current=head;
	node* prev=NULL;
	node* newnode=new node(x);
	int count;
	  if (pos == 0) {
        newnode->next = head;
        return newnode;
    }
	while(current!=NULL && count<pos){
		prev=current;
		current=current->next;
		count++;
	}
	if(count==pos)
	{
		prev->next=newnode;
		newnode->next=current;
	}
	else{
		cout<<"Bhai rhde tere baski na hai"<<endl;
	}
	return head;
}
 

int main() {
    node* head = takeinp();
    head = insert(head, 0, 69);
    display(head);
    return 0;
}

