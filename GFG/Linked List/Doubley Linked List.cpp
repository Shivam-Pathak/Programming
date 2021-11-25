#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}
void insertElement(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    temp->next->prev = temp;        //Temp->Next->Prev == N->prev
}
void deleteAtHead(node* &head){
    node* todelete = head;
    head=head->next;
    head->prev = NULL;
    delete todelete;
}
void deletion(node* &head,int pos){
    node* temp = head;
    int count = 1;
    if(pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    while(temp!=NULL && count!=pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next; 
    if(temp->next!=NULL)
    {
        temp->next->prev = temp->prev;
    } 
    delete temp;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
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
    insertElement(head,6);
    display(head);
    deletion(head,1);
    display(head);
    insertAtHead(head,7);
    display(head);
    return 0;
}
