#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* right;
	node* left;
	node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"-";
		inorder(root->right);
	}
}
node* leftmost(node* wasd)
{
    while(wasd->left != NULL)
    {
        wasd = wasd->left;
    }
    return wasd;
}


node* deletenode(node* root, int key)
{
    node *curr = root;
    node* parent = NULL;
    while (curr != NULL && curr->data != key)
    {
        parent = curr;
        if (curr->data > key)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
    if (curr->left == NULL && curr->right == NULL)
    {
        if (parent->left == curr)
        {
            parent->left = NULL;
        }
        else
        {
            parent->right = NULL;
        }
    }
    else if (curr->right == NULL)
    {
        node* temp = curr->left;
        curr->data = temp->data;
        delete temp;
    }
    else if (curr->left == NULL)
    {
        node* temp = curr->right;
        curr->data = temp->data;
        delete temp;
    }
    else
    {
        node* wasd = leftmost(curr->right);
        int val = wasd->data;
        curr->data = val;
        curr->right = deletenode(curr->right, val); 
    }

    return root;
}


int main()
{
 node* p=new node(4);
 node* q=new node(2);
 node* r=new node(6);
 node* s=new node(1);
 node* t=new node(3);
 node* u=new node(5);
 node* c=new node(7);
 node* v=new node(8);
 p->left=q;
 p->right=r;
 q->right=t;
 q->left=s;
 r->right=c;
 r->left=u;
 c->right=v;
 inorder(p);
 node* wasd=deletenode(p,4);
 cout<<endl;
 inorder(wasd);
}
