#if !defined(STACK_H)
#define STACK_H
#include "vector.h"
typedef struct
{
    Vector v;
} Stack;

void stack_init(Stack *s, int capacity);
void stack_push(Stack *s, int value);
void stack_pop(Stack *s);
int stack_top(Stack *s);
int stack_empty(Stack *s);
void stack_display(Stack *s);
void stack_destroy(Stack *s);
#endif // STACK_H
