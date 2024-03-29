#include<iostream>
using namespace std;
//A node is nothing but a self referential structure.
//Self referential structure is a structure which refers itself
//creating a singly linked list;
struct ll{
struct node{
    int data;
    node* link;
};
//Inserting a node at the beginning(O(1)==constant time algorithm)
//creating a singly linked list
node* head = NULL;
node* tail = NULL;
void samnejogkori(int data){
    node* temp = new node();
    temp-> data = data;
    temp-> link = NULL;
    if(head==NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        temp-> link = head;
        head = temp;
    }
}
void pichonejogkori(int data){
    node* temp = new node();
    temp-> data = data;
    temp-> link = NULL;
    if(head==NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail-> link = temp;
        tail = tail-> link;
    }
}
//insert node at a specific position
void jekonojaygayjogkori(int index, int val) {
        node* ptr = new node();
        ptr-> data = val;
        ptr-> link = NULL;
        if(index < 0 || index>elementguni()+1){
        cout << "Invalid Operation\n";
        return;
        }
        else if(head == NULL){
            head = ptr;
            tail = ptr;
            return;
        }
        else{
        node* temp = head;
        for(int i=0; i<index-1; i++){
            temp = temp-> link;
        }
            ptr-> link = temp-> link;
            temp-> link = ptr;
        }
}
//deleting the first node
void samnethekebaaddei(){
    if(head==NULL){
        cout << "Linked list is empty\n";
        return;
    }
    else if(head==tail){
        free(head);
        head = NULL;
        tail = NULL;
    }
    else{
        node* ptr = head;
        head = head-> link;
        free(ptr);
        ptr = NULL;
    }
}
//delete specific element
void deleteanynode(int x){
   node* ptr = head; 
   if(head-> data==x)
   head = head-> link;
   while(ptr->link){
      if(ptr->link->data == x){
         ptr-> link = ptr-> link-> link;
         break;
      }
      ptr = ptr-> link;
   }
}
//deleting the last node
void pichonthekebaaddei(){
    if(!head){
        cout << "Linked list is empty\n";
        return;
    }
    else if(head==tail){
        free(head);
        head = NULL;
        tail = NULL;
    }
    else{
        node* second_last = head;
        while (second_last->link-> link)
        second_last = second_last->link;
        free(second_last->link);
        second_last->link = NULL;
    }
}
//counting total nodes(O(n))
int elementguni(){
    if(head==NULL){
        cout << "Linked list is empty\n";
    }
    node* ptr = head;
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr = ptr-> link;
    }
    return count;
}
//printing the data by traversing the list(O(n))
void printkori(){
    if(head==NULL){
        cout << "Linked list is empty\n";
    }
    node* ptr = head;
    while(ptr){
        cout << ptr-> data << ' ';
        ptr= ptr-> link;
    }
}
//get the value at a specific index
int get(int index) {
        node* temp = head;
        if(head==NULL)
        return -1;
        for(int i=0; i<index; i++){
            temp = temp-> link;
    }
    return temp-> data;
}
};  
    int main(){
    ll* v = new ll();
    v-> samnejogkori(33);
    v->samnejogkori(66);
    v->pichonejogkori(69);
    v->pichonejogkori(69);
    v->jekonojaygayjogkori(-1,68);
    v->jekonojaygayjogkori(1,132);
    v->samnethekebaaddei();
    v->samnethekebaaddei();
    v->pichonthekebaaddei();
    v->pichonthekebaaddei();
    v->jekonojaygayjogkori(1,33);
    v->printkori();
    v->deleteanynode(33);
    v->deleteanynode(33);
    v->printkori();
    v-> samnejogkori(33);
    v->samnejogkori(66);
    v->pichonejogkori(69);
    v->pichonejogkori(69);
    cout << v->elementguni() << '\n';
    v->printkori();
    }
