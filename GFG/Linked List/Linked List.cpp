#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
int length(node* head){
    int l = 0;
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    } 
    return l;
}
void insertElement(node* &head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void deteteAtHead(node* &head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node* &head,int val)
{
    if(!head)
    {
        cout<<"Empty List"<<endl;
        return;
    }
    if(head->next==NULL)
    {
        deteteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
node* reverseIterative(node* &head)
{
    node* prevptr = NULL;
    node* current = head;
    node* nextptr;
    while(current)
    {
        nextptr = current->next;
        current->next = prevptr;
        prevptr = current;
        current = nextptr;
    }
    return prevptr;
}
node* reverseRecursive(node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newnode = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL; 

    return newnode;
}
node* reverseKnodes(node* head,int k)
{
    node* prevptr = NULL;
    node* current = head;
    node* nextptr;
    int count = 0;
    while(current && count<k)
    {
        nextptr = current->next;
        current->next = prevptr;
        prevptr = current;
        current = nextptr;
        count++;
    }
    if(nextptr){
        head->next = reverseKnodes(nextptr,k);
    }
    return prevptr;
}
void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);
    if(slow==head)
    {
        while(slow->next!=head){
            slow=slow->next;
        }
        slow->next = NULL;
        return;
    }
    if(slow == fast)
    {
        fast = head;
        while(slow->next!=fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = NULL;
    }
}
void display(node* head){
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    node* head = NULL;
    insertElement(head,1);
    insertElement(head,2);
    insertElement(head,3);
    insertElement(head,4);
    insertElement(head,5);
    display(head);
    // // deletion(head,3);
    // // display(head);
    node* newhead = reverseRecursive(head);
    // display(newhead);
    newhead = reverseIterative(newhead);
    // display(newhead);
    // newhead = reverseKnodes(newhead,2);
    // display(newhead);
    makeCycle(newhead,1);
    // cout<<detectCycle(newhead)<<endl;
    // removeCycle(newhead);
    // cout<<detectCycle(newhead)<<endl;
    return 0;
}
