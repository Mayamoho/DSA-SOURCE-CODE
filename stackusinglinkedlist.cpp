/*#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head = NULL;
//checking if the stack is empty
bool isEmpty(){
    if(head==NULL)
    return true;
    else
    return false;
}
//insert a new node at the head of stack
// same as inserting new node at the beginning of a singly linked list
void push(int data){
    //new can be used instead of calloc/malloc to allocate memory dynamically in C++/Java
    node* temp = new node();
    temp-> data = data;
    temp-> link = NULL;
    if(isEmpty())
    {
        head = temp;
        return;
    }
    else{
        temp-> link = head;
        head = temp;
    }
}
//deleting the topmost node
// same as deleting node at the beginning of a singly linked list
void pop(){
    if(isEmpty()){
    cout << "Stack Underflow\n";
    return;
    }
    else if(head-> link == NULL){
            free(head);
            head = NULL;
    }
    else{
        node* ptr = head;
        head = head-> link;
        free(ptr);
        ptr = NULL;  
    }
}
//displaying the topmost element
int peek(){
    if(isEmpty())
    return -1;
    else
    return head-> data;
}
void printdata(){
    if(isEmpty())
    cout << "Stack is empty\n";
    else{
        node* ptr = head;
        while(ptr){
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
*/
// infix to postfix conversion
/*#include<bits/stdc++.h>
using namespace std;
struct Node
{
    char ch;
    Node *next;
};
struct Stack
{
    Node *head = NULL;
    Node *tail = NULL;
    void push(char ch)
    {
        Node *temp = new Node();
        temp->ch = ch;
        if (head == NULL)
        {
            head = temp;
            head->next = NULL;
            tail = head;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }
    char pop()
    {
        Node *temp = head;
        head = head->next;
        return temp->ch;
    }
};
int val(char ch)
{
    if (ch == '^')
        return 5;
    if (ch == '/')
        return 3;
    if (ch == '*')
        return 3;
    if (ch == '+')
        return 2;
    if (ch == '-')
        return 2;
    return 0;
}
int main()
{
    Stack *output_stack = new Stack();
    Stack *operator_stack = new Stack();
    string str1;
    cin >> str1;
    for (int i = 0; i < str1.size(); i++)
    {
        if ((str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z'))
        {
            output_stack->push(str1[i]);
        }
        else if (str1[i] == '(')
        {
            operator_stack->push(str1[i]);
        }
        else if (str1[i] == ')')
        {
            while (operator_stack->head != NULL && operator_stack->head->ch != '(')
            {
                char ch2 = operator_stack->pop();
                output_stack->push(ch2);
            }
            operator_stack->pop();
        }
        else
        {
            if (operator_stack->head == NULL)
            {
                operator_stack->push(str1[i]);
                continue;
            }
            int res1 = val(str1[i]);
            while (operator_stack->head != NULL && (val(operator_stack->head->ch) >= res1 && operator_stack->head->ch != '(' && operator_stack->head->ch != ')'))
            {
                char ch2 = operator_stack->pop();
                output_stack->push(ch2);
            }
            operator_stack->push(str1[i]);
        }
    }
    while (operator_stack->head != NULL)
    {
        char ch2 = operator_stack->pop();
        output_stack->push(ch2);
    }
    string str2;
    while (output_stack->head != NULL)
    {
        str2.push_back(output_stack->pop());
    }
    reverse(str2.begin(), str2.end());
    cout << str2;
    cout << "\n";
    return 0;
}
*/
