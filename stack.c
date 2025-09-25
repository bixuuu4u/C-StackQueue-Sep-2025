#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "vector.c"

void stack_destroy(Stack *s)
{
    vector_destroy(&s->v);
}

void stack_pop(Stack *s)
{
    vector_pop_back(&s->v);
}
int stack_top(Stack *s)
{
    return vector_back(&s->v);
}
int stack_empty(Stack *s)
{
    return vector_empty(&s->v);
}
void stack_push(Stack *s, int value)
{
    vector_push_back(&s->v, value);
}
void stack_display(Stack *s)
{
    if (s->v.size == 0)
    {
        printf("Stack Is Empty\n");
        return;
    }

    for (int i = s->v.size - 1; i >= 0; i--)
    {
        printf("|%4d|\n", s->v.data[i]);
    }
    printf("\n");
}
void stack_init(Stack *s)
{
    vector_init(&s->v);
}