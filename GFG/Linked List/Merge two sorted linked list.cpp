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
node* merge(node* head1,node* head2)
{
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* newHead = new node(-1);
    node* ptr3 = newHead;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return newHead->next;
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
    node* head1 = NULL;
    node* head2 = NULL;
    insertElement(head1,1);
    insertElement(head1,3);
    insertElement(head1,5);
    insertElement(head1,7);
    insertElement(head2,2);
    insertElement(head2,4);
    insertElement(head2,6);
    display(head1);
    display(head2);
    node* newHead = merge(head1,head2);
    display(newHead);
    return 0;
}
