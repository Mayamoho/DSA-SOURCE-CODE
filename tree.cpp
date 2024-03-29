#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
// new node creation
struct node* createNode(int data) {
    struct node* newNode = new node();
    if (newNode == NULL) {
        cout << "Memory error\n";
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
//tree creation
node* tree(node* root){
     cout << "Enter data: " << '\n';
     int x;
     cin >> x;
     root = createNode(x);
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
node* find(node* root , int x){
    if(root==NULL || root-> data == x) return root;
    return find(root-> left, x);
    return find(root-> right, x);
}
// inserting new element in a tree
node* InsertNode(node* root, int data)
{
    // If the tree is empty, assign new node address to root
    if (root == NULL) {
        root = createNode(data);
        return root;
    }
 
    // Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<node*> q;
    q.push(root);
 
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = createNode(data);
            return root;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = createNode(data);
            return root;
        }
    }
}
// deletion in binary tree
void deletDeepest(struct node* root, struct node* d_node)
{
    queue<struct node*> q;
    q.push(root);

    // Do level order traversal until last node
    struct node* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp == d_node) {
            temp = NULL;
            delete (d_node);
            return;
        }
        if (temp->right) {
            if (temp->right == d_node) {
                temp->right = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->right);
        }

        if (temp->left) {
            if (temp->left == d_node) {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}

/* function to delete element in binary tree */
node* deletion(struct node* root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->left == NULL && root->right == NULL) {
        if (root->data == key)
            return NULL;
        else
            return root;
    }

    queue<struct node*> q;
    q.push(root);

    struct node* temp;
    struct node* key_node = NULL;

    // Do level order traversal to find deepest
    // node(temp) and node to be deleted (key_node)
    while (!q.empty()) {
        temp = q.front();
        q.pop();

        if (temp->data == key)
            key_node = temp;

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }

    if (key_node != NULL) {
        int x = temp->data;
          key_node->data = x;
        deletDeepest(root, temp);
    }
    return root;
}


int main(){
    node* root = NULL;
    root = tree(root);
    inorder(root);
    cout << '\n';
    preorder(root);
    cout << '\n';
    postorder(root);
    cout << '\n';
    int n;
    cin >> n;
    if(find(root, n) == NULL)
    cout << "No\n";
    else
    cout << "Yes\n";
    root = InsertNode(root , n);
    inorder(root);
    cout << '\n';
    root = deletion(root, n);
    inorder(root);
}
