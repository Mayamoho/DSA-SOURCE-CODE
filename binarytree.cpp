#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        this-> data = data;
        left = NULL;
        right = NULL;
    }
};
//tree creation
node* insertintobst(node* root, int x){
    if(root == NULL){
        root = new node(x);
        return root;
    }
    if(x > root-> data)
        root-> right = insertintobst(root-> right, x);
    else
        root-> left = insertintobst(root-> left, x);
        return root;
}
void takeinput(node* root){
    int data;
    cin >> data;
    while(data!=1){
        root = insertintobst(root , data);
        cin >> data;
    }
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
/*node* find(node* root , int x){
    if(root==NULL || root-> data == x) return root;
    if(x<root-> data)
    return find(root-> left, x);
    else
    return find(root-> right, x);
}*/
int main(){
    node* root = NULL;
    //int n;
    //cin >> n;
    //root = insertintobst(root, n);
    takeinput(root);
    inorder(root);
    cout << '\n';
    preorder(root);
    cout << '\n';
    postorder(root);
    cout << '\n';
    /*if(find(root, n)==NULL)
    cout << "No\n";
    else
    cout << "Yes\n";*/
}