#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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
void remov(struct node *p, struct node *q, struct node *r)
{
    while (p->next != NULL)
    {
        q = p->next;
        r = p;
        while(q!=NULL)
        {
            if(q->data==p->data)
            {
                r->next=q->next;
                q->next=NULL;
                q=r->next;
            }
            else{
                r=q;
                q=q->next;
            }
        }
        p=p->next;
    }
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
    int a[]={1,2,2,3,3,5};
    create(a,6);
    remov(first,NULL,NULL);
    Display(first);
    return 0;
}