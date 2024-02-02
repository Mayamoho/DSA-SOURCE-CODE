#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* top = NULL;
//checking if the stack is empty
bool isEmpty(){
    if(top==NULL)
    return true;
    else
    return false;
}
//insert a new node at the top of stack
void push(int data){
    //new can be used instead of calloc/malloc to allocate memory dynamically in C++/Java
    node* temp = new node();
    temp-> data = data;
    temp-> link = NULL;
    if(isEmpty())
    {
        top = temp;
        return;
    }
    else{
        temp-> link = top;
        top = temp;
    }
}
//deleting the topmost node
void pop(){
    if(isEmpty())
    cout << "Stack Underflow\n";
    else if(top-> link == NULL){
            free(top);
            top = NULL;
    }
    else{
        node* ptr = top;
        top = top-> link;
        free(ptr);
        ptr = NULL;  
    }
}
//displaying the topmost element
int peek(){
    if(isEmpty())
    cout << "Stack Underflow\n";
    else
    return top-> data;
}
void printdata(){
    if(isEmpty())
    cout << "Stack is empty\n";
    else{
        node* ptr = top;
        while(ptr!=NULL){
            cout << ptr-> data << ' ';
            ptr = ptr-> link;
        }
        cout << '\n';
    }
}
int main(){
    int n;
    cin >> n;
    int data;
    while(n--){
        cin >> data;
        push(data);
    }
    printdata();
    pop();
    printdata();
    cout << peek() << '\n';
    cout << isEmpty() << '\n';
}
