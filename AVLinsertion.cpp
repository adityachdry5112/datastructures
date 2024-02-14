#include<iostream>
#include <algorithm>
using namespace std;
class node{
	public :
	int data;
	int height;
	node* left;
	node* right;
	node(int data)
	{
		this->data=data;
		this->right=NULL;
		this->left=NULL;
	}
}
int getheight(node* wasd)
{
	if (wasd==NULL)
	{
		return 1;
	}
	return 1+max(getheight(wasd->left)-getheight(wasd->right));
}
node* LL(node* x)
{
   node* y=x->left;
   node* t=y->right;
   y->right=x;
   x->left=t;
   return y;
}
node* RR(node* y)
{
	node* x=y->right;
	node* t=x->left;
	x->left=y;
	y->right=t;
	return x;
}
int getbalance(node* wasd)
{
	if(wasd==NULL)
	{
		return 0;
	}
	return (getheight(wasd->left)-getheight(wasd->right));
}
node* insert(node* wasd,int key)
{
	node* root=wasd;
	if(!root)
	{
		return new node(key);
	}
    if(root->data>key)
    {
    	root->left=insert(root->left,key);
    }
    else if(root->data<key)
    {
    	root->right=insert(root->right,key);
    }
    int a=getbalence(wasd);
    if(a<-1&&key<wasd->left->data)
    {
    	return LL(wasd);
    }
    else if(a > 1&&key>wasd->right->data)
    {
    	return RR(wasd);
    }
    else if(a > 1&&key < wasd->right->data)
    {
    	wasd=LL(wasd);
    	return RR(wasd);
    }
    else if(a < -1&&key > wasd->left->data)
    {
    	wasd=RR(wasd);
    	return LL(wasd);
    }

}
int main()
{
  node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
}