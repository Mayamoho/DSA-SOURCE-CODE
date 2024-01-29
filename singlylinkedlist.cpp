#include<iostream>
using namespace std;
//A node is nothing but a self referential structure.
//Self referential structure is a structure which refers itself
//creating a singly linked list;
struct node{
    int data;
    node* link;
};
//Inserting a node at the beginning(O(1)==constant time algorithm)
//creating a singly linked list
node* head = NULL;
void samnejogkori(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp-> data = data;
    temp-> link = NULL;
    if(head==NULL){
        head = temp;
        return;
    }
    else{
    temp-> link = head;
    head = temp;
}
}
//inserting node at the end
//linear time algorithm(O(n))
void pichonejogkori(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp-> data = data;
    temp-> link = NULL;
    node* ptr = head;
    while(ptr-> link != NULL){
        ptr = ptr-> link;
    }
    ptr-> link = temp;
}
//insert node at a specific position
void jekonojaygayjogkori(int index, int val) {
        node* ptr = (node*)malloc(sizeof(node));
        ptr-> data = val;
        ptr-> link = NULL;
        node* temp = head;
        for(int i=0; i<index-1; i++)
            temp = temp-> link;
        ptr-> link = temp-> link;
        temp-> link = ptr;
    }
//deleting the first node
void samnethekebaaddei(){
   if(head==NULL){
      cout << "Linked list is empty\n";
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
   node* ptr = head;
   if(head==NULL)
   cout << "Linked list is empty\n";
   else if(head-> link == NULL){
      free(head);
      head = NULL;
   }
   else{
      while(ptr-> link-> link!=NULL){
         ptr = ptr-> link;
      }
      free(ptr-> link);
      ptr-> link = NULL;
   }
}
//deleting node at a specific position
void jekonojaygathekebaaddei(int position) {
        if (head == NULL)
        cout << "Linked list is empty\n";
        node* temp = head;
        node* ptr = head;
        if (position == 0)
    {
        head = temp->link;
        free(temp); 
        temp = NULL;           
    }
    else{
        while(position!=0){
            ptr = temp;
            temp = temp-> link;
            position--;
        }
        ptr-> link = temp-> link;
        free(temp);
        temp = NULL;
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
    while(ptr!=NULL){
        cout << ptr-> data << ' ';
        ptr= ptr-> link;
    }
    cout << endl;
}
//get the value at a specific index
int get(int index) {
        node* temp = head;
        for(int i=0; i<index; i++){
            temp = temp-> link;
    }
    return temp-> data;
}
//deleting the entire linked list
void dekheideletekoredibo(){
    if(head == NULL)
    cout << "Linked list is empty\n";
    else if(head-> link == NULL){
        free(head);
        head = NULL;
    }
    else{
        node* ptr = head;
        while(ptr!=NULL){
            ptr = ptr-> link;
            free(head);
            head = ptr;
        }
    }
}
//reverse the linked list
void ultefellum(){
    node* prev = NULL;
    node* next = NULL;
    if(head==NULL)
    cout << "Linked list is empty\n";
    while(head!=NULL){
        next = head-> link;
        head-> link = prev;
        prev = head;
        head = next;
    }
    head = prev;
}
    
    int main(){
    samnejogkori(98);
    samnejogkori(81);
    samnejogkori(69);
    pichonejogkori(1);
    pichonejogkori(2);
    pichonejogkori(3);
    pichonejogkori(4);
    pichonejogkori(5);
    ultefellum();
    samnethekebaaddei();
    pichonthekebaaddei();
    deleteanynode(2);
    cout << elementguni() << endl;
    printkori();
    cout << get(1) << endl;
    jekonojaygayjogkori(2,67);
    jekonojaygathekebaaddei(3);
    samnethekebaaddei();
    pichonthekebaaddei();
    jekonojaygathekebaaddei(1);
    dekheideletekoredibo();
    cout << elementguni() << endl;
    printkori();
}