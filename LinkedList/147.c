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
int createNumber(struct node *p)
{
    int num = 0;
    while (p != NULL)
    {
        num = (num * 10) + p->data;
        p=p->next;
    }
    return (num+1);
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    int res=createNumber(first);
    printf("%d\n",res);

    return 0;
}