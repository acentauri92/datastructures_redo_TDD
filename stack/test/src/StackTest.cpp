extern "C"{
#include "stack.h"
}

#include "CppUTest/TestHarness.h"

static stack_t myStack;

TEST_GROUP(Stack)
{
    void setup()
    {
      
    }

    void teardown()
    {

    }
};


TEST(Stack, stackInitialization)
{
  initStack(&myStack);
  LONGS_EQUAL(STACK_EMPTY, myStack.top);
}


TEST(Stack, isEmpty)
{
  
  LONGS_EQUAL(0, isEmpty(&myStack));
}

