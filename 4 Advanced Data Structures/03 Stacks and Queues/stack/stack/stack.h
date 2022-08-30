//
//  stack.h
//  stack
//
//  Created by Ayhan Konar on 2/12/22.
//

#ifndef stack_h
#define stack_h

#define MAX 1000

class Stack
{
public:
    int top;
    int a[MAX]; // Maximum size of Stack
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
bool Stack::push(int x){
    if (top == MAX){
        return 0;
    }else {
        top++;
        a[top] = x;
        return 1;
    }
}
int Stack::peek(){
    if (isEmpty()){
        return 0;
    }else {
        return a[top];
    }
}
int Stack::pop(){
    if (isEmpty()){
        return 0;
    }else {
        int x = a[top];
        top--;
        return x;
    }
}
bool Stack::isEmpty(){
    if (top==-1){
        return 1;
    } else {
        return 0;
    }
}

#endif /* stack_h */
