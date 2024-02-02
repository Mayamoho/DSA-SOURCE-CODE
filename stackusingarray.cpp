#include <iostream>
using namespace std;
//creating stack with array
int stack[100], n=100, top=-1;
//pushing an element
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
//deleting an element
int pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<< stack[top] <<endl;
      top--;
   }
   return stack[top];
}
//seeing the topmost value(peeking)
int peek(){
    if(top<=1)
    cout << "Stack is empty\n";
    else
    return stack[top];
}
//printing the stack
void print() {
   if(top>=0) {
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int data;
        cin >> data;
        push(data);
    }
    print();
    cout << peek() << '\n';
    cout << pop() << '\n';
    print();
}
