#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[],int start,int end, int curr){
    for(int i= start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* builttree(int postorder[],int inorder[],int start,int end){
    static int idx = *(&postorder + 1) - postorder - 1;
        //Due to Zero base indexing - 1 to the size of array;
    if(start>end){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    node* shiv = new node(curr);
    if(start == end){
        return shiv;
    }
    int pos = search(inorder,start,end,curr);
    shiv->right = builttree(postorder,inorder,pos+1,end);
    shiv->left = builttree(postorder,inorder,start,pos-1);
    return shiv;
}
void preorderPrint(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}
void postorderPrint(node* root){
    if(root == NULL){
        return;
    }
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout<<root->data<<" ";
}
void inorderPrint(node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main()
{
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int in[] = {4,2,1,5,3};
    int post[] = {4,2,5,3,1};
    node* root = builttree(post,in,0,4);
    inorderPrint(root);
    cout<<endl;
    postorderPrint(root);
    return 0;
}
