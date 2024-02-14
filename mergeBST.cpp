#include <iostream>
#include <vector>
using namespace std;
class tree{
	public:
		int data;
		tree* left;
		tree* right;
		tree(int data){
			this->data=data;
			this->left=NULL;
			this->right=NULL;
		}
};
void preorder(tree* root)
{
	if(root!=NULL)
	{
		cout<<root->data;
	preorder(root->left);
	preorder(root->right);
	}

}
void postorder(tree* root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;
	}
}
void inorder(tree* root,vector<int>& wasd)
{
	if(root!=NULL)
	{
		inorder(root->left,wasd);
		cout<<root->data;
		wasd.push_back(root->data);
      inorder(root->right,wasd);
	}
}
int search(tree* root,int key)
{
   while(root!=NULL)
   {
   	if(root->data==key)
   {
   	cout<<"found - "<<root->data<<endl;
   	return key;
   }
   else if(root->data>key)
   {
   	root=root->left;
   }
   else if(root->data<key){
   	root=root->right;
   }
   else{
   	return 0;
   }
   }
}
void maximum(tree* root)
{
	if(root==NULL)
	{
		cout<<"wasdwasd";
	}
	while(root->right!=NULL)
	{
		root=root->right;
	}
	cout<<root->data<<endl;
}
void minimum(tree* root)
{
	if(root==NULL)
	{
		cout<<"wasdwasd";
	}
	while(root!=NULL)
	{
		root=root->left;
	}
	cout<<root->data;
}
int predessor(vector<int> wasd,int key)
{
	int i;
	for(i=0;i<wasd.size();i++)
	{
		if(wasd[i]==key)
		{
			break;
		}
	}
	return wasd[i-1];
   
}
int successor(vector<int> wasd,int key)
{
	int i;
	for(i=0;i<wasd.size();i++)
	{
		if(wasd[i]==key)
		{
			break;
		}
	}
	return wasd[i+1];
}
int main()
{
 
 tree* p=new tree(4);
 tree* q=new tree(2);
 tree* r=new tree(6);
 tree* s=new tree(1);
 tree* t=new tree(3);
 tree* u=new tree(5);
 tree* c=new tree(7);
 tree* v=new tree(8);
 p->left=q;
 p->right=r;
 q->right=t;
 q->left=s;
 r->right=c;
 r->left=u;
 c->right=v;
  tree* a =  new tree(10);
     tree* p1 =  new tree(8);
     tree* p3 =  new tree(11);
     tree* p4 =  new tree(9);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2  

    // Linking the root tree with left and right children
     vector<int> wasd;
    a->left = p4;
    a->right = p3;
    p4->left = p1;
    preorder(p);
    // cout<<endl;
    inorder(p,wasd);
    // cout<<endl;
    int qwer=predessor(wasd,5);
    cout<<qwer<<endl;
    qwer=successor(wasd,5);
    cout<<qwer<<endl;
    // postorder(p);
    // cout<<endl;
    // search(p,6);
    maximum(p);
    // minimum(p);
    // for(int i=0;i<wasd.size();i++)
    // {
    // 	cout<<wasd[i];
    // }
}