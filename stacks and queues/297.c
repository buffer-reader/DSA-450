#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *q;
};
void create(struct queue *q,int n)
{
    q->size=n;
    q->front=q->rear=0;
    q->q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("queue overflow\n");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->q[q->rear]=x;
    }
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Stack empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->q[q->front];
    }
    return x;
}
void display(struct queue q)
{
    int i=q.front+1;
    do
    {
        printf("%d",q.q[i]);
        i=(i+1)%q.size;
    } while (i!=(q.rear+1)%q.size);
    
}
int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    printf("step dequeue \n");
    int x=dequeue(&q);
    printf("%d",x);
    printf("step display\n");
    display(q);

return 0;
}