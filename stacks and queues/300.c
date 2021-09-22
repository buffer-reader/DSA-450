#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *s;
};
void create(struct stack *q,int n)
{
    q->size=n;
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
void display(struct stack sq)
{
    for(int i=0;i<=sq.top;i++)
    {
        printf("%d ",sq.s[i]);
    }
}

int main()
{
    int a[]={0,1,2,3,4,5,6,7,8};
    int n=3;
    int diff=9/n;
    struct stack sq[n];
    for(int i=0;i<n;i++)
    {create(&sq[i],diff);}
    int j=0;
    for(int i=0;i<n;i++)
    {
        int k=0;
        for(;j<9;j++)
        {
            push(&sq[i],a[j]);
            k++;
            if(k==diff)
            {
                j++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        display(sq[i]);
        printf("\n");
    }

    return 0;
}