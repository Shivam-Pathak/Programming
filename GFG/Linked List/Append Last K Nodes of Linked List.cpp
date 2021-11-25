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
node* kappend(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail = head;
    int l = length(head);
    k = k%l;
    int count = 1;
    while(tail->next!=NULL){
        if(count == l-k){
            newTail = tail;
        }
        if(count == l - k + 1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;
    return newHead;
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
    head = kappend(head,3);
    display(head);
    return 0;
}
