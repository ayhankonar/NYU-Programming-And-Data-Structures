//
//  queue.h
//  queue
//
//  Created by Ayhan Konar on 2/12/22.
//

#ifndef queue_h
#define queue_h
#define MAX 1000

class Queue {
  public:
    int rear_value;
    int a[MAX]; // Maximum size of Queue
    Queue() { rear_value = -1; }
    bool enqueue(int x);
    int dequeue();
    int front();
    int rear();
};
bool Queue::enqueue(int x){
    if (rear_value == MAX)
        return 0;
    else {
        rear_value++;
        a[rear_value] = x;
        return 1;
    }
}
int Queue::front(){
    if (rear_value == -1)
        return 0;
    else {
        return a[0];
    }
}
int Queue::rear(){
    if (rear_value == -1)
        return 0;
    else {
        return a[rear_value];
    }
}
int Queue::dequeue(){
    if (rear_value == -1)
        return 0;
    else {
        int x = a[0];
        for (int i=0; i < rear_value; i++){
            a[i] = a[i+1];
        }
        rear_value--;
        return x;
    }
}

#endif /* queue_h */
