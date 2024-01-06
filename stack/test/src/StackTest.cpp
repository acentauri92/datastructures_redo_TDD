extern "C"{
  #include "stack.h"
}

#include "CppUTest/TestHarness.h"

static stack_t myStack;
int testNumber = 10; 

TEST_GROUP(Stack)
{
    void setup()
    {
     initStack(&myStack);
    }

    void teardown()
    {

    }
};


TEST(Stack, stackInitialization)
{
  LONGS_EQUAL(STACK_EMPTY, myStack.top);
}

TEST(Stack, stackIsEmptyAfterInit)
{
  CHECK_TRUE(isEmpty(&myStack));
}

TEST(Stack, stackIsFullAfterInit)
{
  CHECK_FALSE(isFull(&myStack));
}

TEST(Stack, insertIntoStackReturnsTrue)
{
  LONGS_EQUAL(true, push(&myStack, testNumber));
}

TEST(Stack, insertIntoStackAndCheckValue)
{
  push(&myStack, testNumber);
  CHECK_EQUAL(testNumber, myStack.item[myStack.top]);
}

TEST(Stack, insertIntoStackUntilFull)
{
  for(int count = 0; count < SIZE; count++){
    LONGS_EQUAL(true, push(&myStack, testNumber));
  }
}

TEST(Stack, insertIntoStackWhenFullFails)
{
  //Make stack full
  for(int count = 0; count < SIZE; count++){
    LONGS_EQUAL(true, push(&myStack, testNumber));
  }
  //Insert one more element
  LONGS_EQUAL(false, push(&myStack, testNumber));
}