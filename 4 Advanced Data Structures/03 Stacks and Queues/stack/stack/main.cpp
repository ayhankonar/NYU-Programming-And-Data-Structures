//
//  main.cpp
//  stack
//
//  Created by Ayhan Konar on 2/12/22.
//

#include <iostream>
#include "stack.h"

int main(int argc, const char * argv[]) {
    Stack mystack;
    if(mystack.isEmpty())
        printf("No Data");
    else
        printf("Data");
    mystack.push(10);
    if(mystack.isEmpty())
        printf("No Data");
    else
        printf("Data");
    printf("%i",mystack.peek());
    printf("%i",mystack.pop());
}
