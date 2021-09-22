#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *st1)
{
    printf("enter the size\n");
    scanf("%d", &st1->size);
    st1->top =-1;
    st1->s = (int *)malloc(st1->size * sizeof(int));
}
void push1(struct stack *st1,int x)
{
    if (st1->top == st1->size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st1->top++;
        st1->s[st1->top] = x;
    }
}
void push2(struct stack *st2,int x)
{
    if (st2->top == st2->size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st2->top++;
        st2->s[st2->top] = x;
    }
}
void pop1(struct stack *st1)
{
    int x = -1;
    if (st1->top == -1)
    {
        printf("stack empty\n");
    }
    else
    {
        x = st1->s[st1->top];
        st1->top--;
    }
     printf("%d",x);
}
void pop2(struct stack *st2)
{
    int x = -1;
    if (st2->top == -1)
    {
        printf("stack empty\n");
    }
    else
    {
        x = st2->s[st2->top];
        st2->top--;
    }
    printf("%d",x);
}
int main()
{
    struct stack st1,st2;
    create(&st1);
    create(&st2);
    push1(&st1,2);
    push1(&st1,3);
    push2(&st2,4);
    pop1(&st1);
    pop2(&st2);
    pop2(&st2);

    return 0;
}