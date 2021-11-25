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
int height(node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1;

}
bool checkBalancedTree(node* root){
    if(root == NULL){
        return true;
    }
    if(checkBalancedTree(root->left)==false){
        return false;
    }
    if(checkBalancedTree(root->right)==false){
        return false;
    }
    int lh = height(root->left);
    int rh =  height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }
}

void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    // root->left->left->left = new node(5);
    cout<<checkBalancedTree(root)<<" ";
    return 0;
}
