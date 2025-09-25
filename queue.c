#include <stdio.h>
#include "queue.h"
#include "list.c"

void queue_init(Queue *q)
{
    list_init(&q->l);
}
void queue_enqueue(Queue *q, int value)
{
    list_push_back(&q->l, value);
}
void queue_dequeue(Queue *q)
{
    list_pop_back(&q->l);
}
int queue_front(Queue *q)
{
    return list_front(&q->l);
}
int queue_empty(Queue *q)
{
    return list_empty(&q->l);
}
int queue_size(Queue *q)
{
    return list_size(&q->l);
}
