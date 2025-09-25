#if !defined(QUEUE_H)
#define QUEUE_H
#include "list.h"

typedef struct
{
    List l;
} Queue;

void queue_init(Queue *q);
void queue_enqueue(Queue *q, int value);
void queue_dequeue(Queue *q);
int queue_front(Queue *q);
int queue_empty(Queue *q);
int queue_size(Queue *q);

#endif // QUEUE_H
