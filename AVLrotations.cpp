#include<iostream>
using namespace std;
class node{
public:
	node* left;
	node* right;
	int data;
	int height;
	
};
node* newnode(int data){
		node* wasd=new node();
		wasd->data=data;
		wasd->left=NULL;
		wasd->right=NULL;
		wasd->height=1;
		return wasd
	}
int maxx(int a,int b)
	{
		return (a > b)? a : b; 
	}
node* rightrotation(node* x){
		node* y=x->left;
		node* t2=y->right;

		y->right=x;
		x->left=t2;
		return y;

		y->height = maxx(y->left->height,y->right->height) + 1;  
    x->height = maxx(x->left->height,x->right->height) + 1;
	}
node* leftrotation(node* y){
		node* x=y->right;
		node* t2=x->left;

		x->left=y;
		y->right=t2;
		return x;

	y->height = maxx(y->left->height,y->right->height) + 1;  
    x->height = maxx(x->left->height,x->right->height) + 1;
	
	}
int getBalance(node *N)  
{  
    if (N == NULL)  
        return 0;  
    return N->left->height - N->right->height;  
} 
node* insert(node* wasd,int key)
{
	if(wasd==NULL)
		{return newnode(key); }
	else if(wasd->data < key)
	{
		wasd->right=insert(wasd->right,key);
	}
	else if(wasd->data > key)
	{
		wasd->left=insert(wasd->left,key);
	}
	else {
		return wasd;
	}
	wasd->height = 1 + maxx(wasd->left->height,wasd->right->height);  
	int balance =getBalance(wasd);
	if(balance > 1&& key < wasd->left->data)
	{
		rightrotation(wasd);
	}
	else if(balance <-1&& key > wasd->right->data)
	{
		leftrotation(wasd);
	}
	else if(balance <-1&& key < wasd->right->data){
          wasd->left=leftrotation(wasd->left);
          return rightrotation(wasd);
	}
	else{
		wasd->right=rightrotation(wasd->right);
		return leftrotation(wasd);
	}
	return wasd;
}
void preOrder(node *root)  
{  
    if(root != NULL)  
    {  
        cout << root->data << " ";  
        preOrder(root->left);  
        preOrder(root->right);  
    }  
}
int main()  
{  
    node *root = NULL;  
      
    /* Constructing tree given in  
    the above figure */
    root = insert(root, 10);  
    root = insert(root, 20);  
    root = insert(root, 30);  
    root = insert(root, 40);  
    root = insert(root, 50);  
    root = insert(root, 25);  
      
    /* The constructed AVL Tree would be  
             30  
             / \  
            20 40  
            / \ \  
           10 25 50  
    */
    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";  
    preOrder(root);  
      
    return 0;  
}