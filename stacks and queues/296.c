//implementation of stack

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *st)
{
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
    st->top++;
    st->s[st->top]=x;
    }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        printf("stack underflow\n");
    }
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int main()
{


return 0;
}