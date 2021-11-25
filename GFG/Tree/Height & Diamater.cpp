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
int diameter(node* root){
    if(root == NULL){
        return 0;
    }
    int lh =  height(root->left);
    int rh = height(root->right);
    int currDiameter = lh + rh + 1;

    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);
    return  max(currDiameter,max(leftDiameter,rightDiameter));
}
int efficientDiameter(node* root,int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lDiameter = efficientDiameter(root->left, &lh);
    int rDiameter = efficientDiameter(root->right, &rh);
    int currDiameter = lh + rh + 1;

    *height = max(lh,rh) + 1;

    return max(currDiameter,max(lDiameter,rDiameter));
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
    root->left->left =  new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<height(root)<<endl;
    cout<<diameter(root)<<endl;
    int height = 0;
    cout<<efficientDiameter(root,&height)<<endl;
    return 0;
}
