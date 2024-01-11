#include <stdbool.h>
#define SIZE            10
#define STACK_EMPTY     -1

typedef struct{
    int top;
    int item[SIZE];
}stack_t;

/*Prototype definitions*/
void initStack(stack_t* pStack);
bool isEmpty(stack_t* pStack);
bool isFull(stack_t* pStack);

bool push(stack_t* pStack, int number);
int pop(stack_t* pStack);
void printStack(stack_t* pStack);