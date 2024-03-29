/*#include<bits/stdc++.h>
using namespace std;
struct que{
struct node{
    int data;
    node* link;
};
node* head = NULL;
node* tail = NULL;
// same as inserting node at the end of a singly linked list
void enqueue(int data){
    node* temp = new node();
    temp-> data = data;
    temp-> link = NULL;
    if(empty()){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail-> link = temp;
        tail = tail-> link;
    }

}
bool empty(){
    if(head==NULL)
    return true;
    return false;
}
void print(){
    node* ptr = head;
    if(empty()){
    cout << "Queue is empty\n";
    return;
    }
    else{
        while(ptr){
            cout << ptr-> data << ' ';
            ptr = ptr-> link;
        }
    }
}
// same as deleting the first node of a singly linked list
void dequeue(){
    if(empty()){
        cout << "Queue is empty\n";
        return;
    }
    else if(head-> link == NULL){
        free(head);
        head = NULL;
    }
    else{
        node* temp = head;
        head = head-> link;
        free(temp);
        temp = NULL;
    }
}
int peek(){
    if(empty()){
    cout << "Queue is empty\n";
    return -1;
}
    else
    return head-> data;
}
};
int main(){
    que* a = new que();
    int n;
    cin >> n;
    while(n--){
        int data;
        cin >> data;
        a-> enqueue(data);
    }
    a-> print();
    a-> dequeue();
    cout << '\n';
    cout << a-> peek() << '\n';
    a-> print();
}
*/
// palindrome checker using stack and queue
/*#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
};
struct Stack{
    Node* head=NULL;
    Node* tail=NULL;
    void push(int x){
        Node* temp=new Node();
        temp->val=x;
        if(head==NULL){
            head=temp;
            head->next=NULL;
            tail=head;
        }
        else{
            temp->next=head;
            head=temp;
        }
    }
    int peek(){
        if(head==NULL){
            cout<<"Nothing to peek"<<endl;
            return 0;
        }
        return head->val;
    }
    int pop(){
        Node* temp=head;
        if(head==NULL){
            cout<<"Nothing to pop"<<endl;
            return -1;
        }
        if(head==tail){
            int val=head->val;
            head=NULL;
            tail=NULL;
            free(temp);
            return val;
        }
        int val=head->val;
        head=head->next;
        free(temp);
        return val;
    }
};
struct Queue{
    Node *head = NULL;
    Node *tail = NULL;
    void push(int x)
    {
        Node *temp = new Node();
        temp->val = x;
        if (head == NULL)
        {
            head = temp;
            head->next = NULL;
            tail = head;
        }
        else
        {
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
        }
    }
    int pop()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "No element to pop" << endl;
            return -1;
        }
        if (head == tail)
        {
            int val=head->val;
            head = NULL;
            tail = NULL;
            free(temp);
            return val;
        }
        else
        {
            int val=head->val;
            head = head->next;
            free(temp);
            return val;
        }
    }
};
int main()
{
    string str1;
    cin>>str1;
    Queue* new_queue=new Queue();
    Stack* new_stack=new Stack();
    int length=str1.size();
    for(int i=0;i<length;i++){
        new_queue->push(str1[i]);
        new_stack->push(str1[i]);
    }
    for(int i=0;i<length/2;i++){
        char ch1=(char)new_queue->pop();
        char ch2=(char)new_stack->pop();
        if(ch1!=ch2){
            cout<<"Not Palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Palindrome"<<endl;
    return 0;
}
*/