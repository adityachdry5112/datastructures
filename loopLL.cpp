#include<iostream>
#include<map>
using namespace std;
class node{
  
    public:

    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail = NULL;
    while(data>0){
        if(head==NULL){
            node* newnode=new node(data);
            head=newnode;
            tail=newnode;
        }
        else{
            node* newnode=new node(data);
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
bool detectloop(node* head){
    map<node* ,bool> visited;
    while(head !=NULL){
        if(visited[head]==true){
            return true;
        }
        visited[head]==true;
        head=head->next;
    }
    return false;
}
int main(){
    

}