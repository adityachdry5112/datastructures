#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int data){
			this->data=data;
			this->left=NULL;
			this->right=NULL;
		}
};
void preorder(node* root){
	if(root!=NULL){
		cout<<root->data<<"-";
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"-";
		inorder(root->right);
	}

}
void postorder(node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<"-";
	}

}
int isbst(node* root){
	static node* prev=NULL;
	if(root!=NULL){
	   if(!isbst(root->left)){
	   	return 0;
	   }
	   if(prev!=NULL && root->data < prev->data){
	   	return 0;
	   }
	   prev=root;
	   return isbst(root->right);
	}
	else {return 1;
	}
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
 /*      4
 		/  \
 	   2    6
 	  / \  / \
 	 1  3 5   7
 	           \
 	            8
 	           */
 preorder(p);
 cout<<endl;
 postorder(p);
 cout<<endl;
 inorder(p);
 cout<<endl;
 cout<<isbst(p)<<endl; 
}