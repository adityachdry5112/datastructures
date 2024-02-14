#include<bits/stdc++.h>
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
int maxdepth(tree* root){
	if(root==NULL)
	{
		return 0;
	}
	int right=maxdepth(root->right);
	int left=maxdepth(root->left);
	return max(right,left)+1;

}
tree* insert(tree* root,int key){
	if (!root) {
 
        // Insert the first node, if root is NULL.
        return new tree(key);
    }
 
    // Insert data.
    if (key > root->data) {
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.
 
        // Process right nodes.
        root->right = insert(root->right, key);
    }
    else if (key < root->data) {
        // Insert left node data, if the 'value'
        // to be inserted is smaller than 'root' node data.
 
        // Process left nodes.
        root->left = insert(root->left, key);
    }
 
    // Return 'root' node, after insertion.
    return root;
}


int head(int pre[],int inn[],int size)
{
	int head=pre[0];
	int i;
    for(i=0;i<size;i++)
    {
    	if(inn[i]==head)
    	{
    		break;
    	}
    }
    return i;

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
 tree* wasd;
 int qwe=maxdepth(p);
 cout<<qwe;
 int pre[8]={4,2,1,3,6,5,7,8};
 int inn[8]={1,2,3,4,5,6,7,8};
 int a=head(pre,inn,8);
 cout<<a;
 wasd=insert(wasd,pre[0]);
  for(int i=a;i>=0;i--)
  {
  	wasd=insert(wasd,i);
  }
}