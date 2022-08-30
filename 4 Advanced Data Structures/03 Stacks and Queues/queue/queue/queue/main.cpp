//
//  main.cpp
//  queue
//
//  Created by Ayhan Konar on 2/12/22.
//

#include <iostream>
#include "queue.h"

int main(int argc, const char * argv[]) {
    Queue myqueue;
    myqueue.enqueue(10);
    myqueue.enqueue(20);
    myqueue.enqueue(30);
    printf("%i",myqueue.front());
    printf("%i",myqueue.rear());
    printf("%i",myqueue.dequeue());
}
