#include <stdio.h>
#include "stack.h"

void initStack(stack_t* pStack){
    pStack->top = STACK_EMPTY;
}

bool isEmpty(stack_t* pStack){
    return (pStack->top == STACK_EMPTY);
}

bool isFull(stack_t* pStack){
    return (pStack->top == (SIZE -1));
}


bool push(stack_t* pStack, int number){
    if(isFull(pStack)){
        return false;
    }
    else {
        //Insert element
        pStack->item[++(pStack->top)] = number;
        return true;
    }
}

int pop(stack_t* pStack){
    if(isEmpty(pStack)){
        return STACK_EMPTY;
    }
    return pStack->item[(pStack->top)--];
}

void printStack(stack_t* pStack){
    if(isEmpty(pStack)){
        printf("Cannot print. Empty stack\n");
    }
    //Take a temp ptr to top for reading
    int currentTop = pStack->top;
    while(currentTop != STACK_EMPTY){
        printf("%d ", pStack->item[currentTop--]);
    }
    printf("\n");
}
