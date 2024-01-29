#include<iostream>
using namespace std;
//creating a self referential strucure which is a node
//One extra pointer known as prev is introduced
//This points to the former node 
//Doubly linked list has the power to move backwards
struct node{
    int data;
    node* prev = NULL;
    node* next = NULL;
};
//inserting a node into an empty doubly nexted list
node* head = NULL;
void addatempty(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp-> data = data;
    temp-> prev = NULL;
    temp-> next = NULL;
    head = temp;
}
//inserting at the beginning
void samnejogkori(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp-> data = data;
    temp-> prev = NULL;
    temp-> next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    else{
        temp-> next = head;
        head-> prev = temp;
        head = temp;
    }
}
//inserting at the end
void pichonejogkori(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp-> data = data;
    temp-> prev = NULL;
    temp-> next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    else{
        node* ptr = head;
        while(ptr-> next!=NULL){
            ptr = ptr-> next;
        }
        ptr-> next = temp;
        temp-> prev = ptr;
    }
}
//inserting at a certain position
void jekonojaygayjogkori(int data, int index){
    node* temp = (node*)malloc(sizeof(node));
    temp-> data = data;
    temp-> prev = NULL;
    temp-> next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    else{
        node* ptr = head;
        for(int i=0; i<index-1; i++)
            ptr = ptr-> next;
            temp-> next = ptr-> next;
            ptr-> next = temp;
            temp-> prev = ptr;
    }
}
//counting total nodes
int elementguni(){
    if(head == NULL)
    cout <<  "Linked list is empty\n";
    node* ptr = head;
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr = ptr-> next;
        }
        return count;
}
//printing the data
void printkori(){
    node* ptr = head;
    if(head == NULL)
    cout <<  "Linked list is empty\n";
    else{
        while(ptr!=NULL){
            cout << ptr-> data << ' ';
            ptr = ptr-> next;
        }
        cout << endl;
    }
}
//deleting the first node
void samnethekebaaddei(){
    if(head==NULL)
    return;
    else if(head-> next==NULL){
    free(head);
    head = NULL;
    }
    else{
        node* ptr = head;
        head = head-> next;
        free(ptr);
        ptr = NULL;
        head-> prev= NULL;
    }
}
//deleting the last node
void pichonthekebaaddei(){
    node* ptr = head;
    if(head==NULL)
   cout << "Linked list is empty\n";
   else if(head-> next == NULL){
      free(head);
      head = NULL;
   }
   else{
      while(ptr-> next-> next!=NULL){
         ptr = ptr-> next;
      }
      free(ptr-> next);
      ptr-> next = NULL;
   }
}
//deleting node at a specific position
void jekonojaygathekebaaddei(int position){
    if (head == NULL)
        cout << "Linked list is empty\n";
        node* temp = head;
        node* ptr = head;
        if (position == 0)
    {
        head = head->next;
        //free is a built in dynamic memory allocation method in C/C++ which frees additional memory
        free(temp); 
        temp = NULL;           
    }
    else{
        while(position!=0){
            ptr = temp;
            temp = temp-> next;
            position--;
        }
        ptr-> next = temp-> next;
        free(temp);
        temp = NULL;
    }
    }
//reversing a linked list
void ultefellum(){
    node* ptr1 = head;
    node* ptr2 = ptr1-> next;
    ptr1-> next = NULL;
    ptr1-> prev = ptr2;
    if(head==NULL)
    cout << "Linked list is empty\n";
    while(ptr2!=NULL){
        ptr2-> prev = ptr2-> next;
        ptr2-> next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2-> prev;
    }
    head = ptr1;
}
int main(){
    addatempty(45);
    samnejogkori(34);
    pichonejogkori(67);
    jekonojaygayjogkori(43,1);
    samnethekebaaddei();
    pichonthekebaaddei();
    jekonojaygathekebaaddei(1);
    samnejogkori(34);
    pichonejogkori(67);
    jekonojaygayjogkori(49,1);
    ultefellum();
    cout << elementguni() << endl;
    printkori();
}