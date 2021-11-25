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
node* builttree(int preorder[],int inorder[],int start,int end){
    if(start>end){
        return NULL;
    }
    static int idx = 0;
    int curr = preorder[idx];
    idx++;
    node* shiv = new node(curr);
    if(start == end){
        return shiv;
    }
    int pos = search(inorder,start,end,curr);
    shiv->left = builttree(preorder,inorder,start,pos-1);
    shiv->right = builttree(preorder,inorder,pos+1,end);
    return shiv;
}
void inorderPrint(node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int inorder[] = {1,2,4,3,5};
    int preorder[] = {4,2,1,5,3};

    node* root = builttree(preorder, inorder,0,4);
    inorderPrint(root);
    cout<<endl;
    postorder(root);
    return 0;
}
