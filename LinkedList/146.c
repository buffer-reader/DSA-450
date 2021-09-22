#include <stdio.h>
#include <math.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL;
void create(int a[], int n)
{
    struct node *p, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}
void movetofirst(struct node *p)
{
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    struct node *last=p->next;
    p->next=NULL;
    last->next=first;
    first=last;
}
void Display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    movetofirst(first);
    Display(first);

    return 0;
}