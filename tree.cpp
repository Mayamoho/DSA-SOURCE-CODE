//creation of binary tree using linked list and recursion
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* tree(node* root){
     cout << "Enter data: " << '\n';
     int x;
     cin >> x;
     root = new node();
     root-> data = x;
     root-> left = NULL;
     root-> right = NULL;
     if(x==-1)
     return NULL;
     cout << "Enter data for left child of: " << x << '\n';
     root-> left = tree(root-> left);
     cout << "Enter data for right child of: " << x << '\n';
     root-> right = tree(root-> right);
     return root;
}
int main(){
    node* root = NULL;
    root = tree(root);
}