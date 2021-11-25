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
void intersect(node* &head1 , node* &head2 , int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
int intersection(node* &head1,node* &head2)
{
    int l1 = length(head1) , l2 = length(head2);
    int dist = 0;
    node* ptr1;
    node* ptr2;
    if(l1>=l2){
        dist = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        dist = l2-l1;
        ptr1 = head2;
        ptr2 = head1; 
    }
    while(dist--){
        ptr1 = ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1 == ptr2){
            return ptr1->data; 
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
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
    insertElement(head1,2);
    insertElement(head1,3);
    insertElement(head1,4);
    insertElement(head1,5);
    insertElement(head2,7);
    insertElement(head2,8);
    insertElement(head2,9);
    display(head1);
    display(head2);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    return 0;
}
