#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top=NULL;
void push(int x)
{
    struct node *t;
    t=(struct node*)mallloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("Stack Overflow\n");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{
    struct node *t;
    int x=-1;
    if(top==NULL)
    {
        printf("stack Undeflow\n");
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
int main()
{
    push(1);
    push(2);
    push(3);

return 0;
}