#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        this.data = x;
        left = right = NULL;
    }
};
//tree creation
node* tree(node* root){
     cout << "Enter data: " << '\n';
     int x;
     cin >> x;
     root = new node(x);
     if(x==-1)
     return NULL;
     cout << "Enter data for left child of: " << x << '\n';
     root-> left = tree(root-> left);
     cout << "Enter data for right child of: " << x << '\n';
     root-> right = tree(root-> right);
     return root;
}
// inorder traversal
void inorder(node* root){
    if(!root)return;
    inorder(root-> left);
    cout << root-> data << ' ';
    inorder(root-> right);
}
// preorder traversal
void preorder(node* root){
    if(!root)return;
     cout << root-> data << ' ';
     preorder(root-> left);
     preorder(root-> right);
}
// postorder traversal
void postorder(node* root){
     if(!root)return;
     postorder(root-> left);
     postorder(root-> right);
     cout << root-> data << ' ';
}
// finding an element in a tree
bool find(node* root , int x){
    if(!root) return false;
    if(root-> data == x)return true;
    return find(root-> left);
    return find(root-> right);
}
int main(){
    node* root = NULL;
    root = tree(root);
    inorder(root);
    cout << '\n';
    preorder(root);
    cout << '\n';
    postorder(root);
    int n;
    cin >> n;
    if(find(root, n))
    cout << "Yes\n";
    else
    cout << "No\n";
}
