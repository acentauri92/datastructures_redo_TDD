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

}

void printStack(stack_t* pStack){

}

stack_t* createStack(size_t sizeOfStack){
    
} //TODO