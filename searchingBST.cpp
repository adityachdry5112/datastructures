#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* right;
		node* left;
		node(int data){
			this->data=data;
			node* right=NULL;
			node* left=NULL;
		}
};
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
node* search(node* root,int key){
	if(root==NULL){
		return NULL;
	}
		if(key==root->data){
			return root;
		}
		else if(key<root->data){
			return search(root->left,key);
		}
		else{
			return search(root->right,key);
		}
}
void insert(node* root,int key){
	node* prev=NULL;
	while(root!=NULL){
		prev=root;
		if(key==root->data){
			return ;
		}
		else if(root->data>key){
			root = root->left;
		}
		else{
			root=root->right;
		}
	}
	node* n = new node(key);
	if(prev->data>key){
		prev->left=n;
	}
	else{
		prev->right=n;
	}
	cout<<n->data;
}
int main()
{
   node* a=new node(6);
   node* a1=new node(4);
   node* a2=new node(8);
   node* a3=new node(2);
   node* a4=new node(5);
   node* a5=new node(7);
   node* a6=new node(9);
   a->left=a1;
   a->right=a2;
   a1->left=a3;
   a1->right=a4;
   a2->left=a5;
   a2->right=a6;
   /*
      6
    /   \
   4     8
  / \   /  \
 2   5  7    9
   
   */
   node* n=search(a,7);
   if(n!=NULL){
   	cout<<"found:"<<n->data<<endl;
   }
   else{
   	cout<<"gand mra le bhnchod\n";
   }
   
   insert(a, 16);
   node* q=a->right->right;
   node* w=q->right;
    cout<<w->data<<endl;
    return 0;
   
   
   
   
   
   
   
}

