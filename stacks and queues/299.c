#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *s;
};
void create(struct stack *q)
{
    printf("enter the size of stack\n");
    scanf("%d", &q->size);
    q->top = -1;
    q->s = (int *)malloc(q->size * sizeof(int));
}
void push(struct stack *sq,int x)
{
    if(sq->top==sq->size-1)
    {
        printf("stack full\n");
    }
    else{
        sq->top++;
        sq->s[sq->top]=x;
    }
}
int peek(struct stack q, int mid)
{
    int x = q.s[mid];
    return x;
}

int main()
{
    struct stack sq;
    create(&sq);
    for(int i=0;i<sq.size;i++)
    {
        push(&sq,i);
    }
    int mid=sq.top/2;
    int x=peek(sq,mid);
    printf("%d\n",x);

    return 0;
}