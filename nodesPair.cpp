#include <iostream>
using namespace std;
class ListNode{
    public :
    int val;
    ListNode* next;
    ListNode(int data)
    {
        this->val=data;
        this->next=NULL;
    }
};
ListNode* swapPairs(ListNode* head){
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ListNode* temp=head;
    temp=head->next;
    head->next=swapPairs(head->next->next);
    temp->next=head;
    return temp;
}
void display(ListNode* head)
{
    while(head->next!=NULL)
    {
        cout<<head->val<<endl;
    }
}
int main(){
    ListNode* head;
    ListNode* p;
    ListNode* q;
    ListNode* r;
    head->val=1;
    p->val=2;
    q->val=3;
    r->val=4;
    head->next=p;
    p->next=q;
    q->next=r;
    r->next-NULL;
    ListNode* wasd=swapPairs(head);
    display(wasd);
}