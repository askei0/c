// Let's implement a stack data structure in which "we will be able to stack boxes on top of each other".
//  For this, let's create a structure called Box,
//  which has an integer weight value (weight) and a pointer to a Box structure (previous).

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Box Box;

struct Box
{
    unsigned int weight;
    Box *previousBox;
};

Box *top;

// Create a global pointer variable from the Box structure (top).
//  Let's write the initialize function, which sets the top variable to NULL. Call initialize in the main function!

void init()
{
    top = NULL;
}

// Write the isEmpty function, which returns whether the stack is empty or not.
//  (The stack is empty if the top variable is a NULL pointer.)
bool isEmpty()
{
    return top == NULL;
}

// Write the peek function, which returns the weight of the current uppermost Box.
//  (Don't forget the case when the stack is empty!)

long int peek()
{
    if (isEmpty())
    {
        printf("Cannot Peek. Stack is Empty\n");
        return -1;
    }
    return top->weight;
}

// Write the push function, which receives an integer as a parameter, which will be the weight of the next box.
//  Let's create a new element on the stack and set its weight.
//   The previous data element of the new element should point to the previous data element!
//    Let the top variable point to the new element.

void push(int newBoxWeight)
{
    Box *newBox = (Box *)malloc(sizeof(Box));

    newBox->weight = newBoxWeight;

    newBox->previousBox = top;

    top = newBox;
}

// Write the pop function, which frees the element at the top of the stack
// and sets the top variable to the one below it.
//  (Don't forget the empty stack option!)
long int pop()
{
    if (isEmpty())
    {
        printf("Cannot pop. Stack is empty\n");
        return -1;
    }

    Box *poppedBox = top;
    top = top->previousBox;

    unsigned int poppedweight = poppedBox->weight;
    free(poppedBox);

    return poppedweight;
}

// Write the copyTop function, which copies the topmost element of the stack and places the copy on top of the stack.
//  Let's see what happens if we copy only the pointer pointing to the topmost element,
//   or if we allocate a new memory area for the copy and copy each data item!
void copyTop()
{
    // Box* newBox ;
    // newBox->previousBox = top;
    // top = newBox;
    // DO NOT DO THE ABOVE

    push(top->weight);
}

int main()
{
    init();
    peek();

    push(3);
    printf("peek: %ld\n", peek()); // 3

    push(7);
    printf("peek: %ld\n", peek()); // 7

    push(8);
    printf("peek: %ld\n", peek()); // 8

    push(9);
    printf("peek: %ld\n", peek()); // 9

    pop();
    printf("peek: %ld\n", peek()); // 8

    pop();
    printf("peek: %ld\n", peek()); // 7

    copyTop();
    printf("peek: %ld\n", peek()); // 7

    pop();
    printf("peek: %ld\n", peek()); // 7

    pop();
    printf("peek: %ld\n", peek()); // 3

    pop();
    printf("peek: %ld\n", peek()); // -1
}
