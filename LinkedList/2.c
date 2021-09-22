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
void createlink(struct node *x, struct node *l, int k)
{
    int count = 0;
    while (count < k && l != NULL)
    {
        l = l->next;
        count++;
    }
    x->next = l;
}
void revGroup(struct node *p, struct node *q, struct node *r, int k)
{
    struct node *x;
    int count = 0;
    int flagoffirst = 0;
    while (p != NULL)
    {
        x = p;
        while (count <= k && q != NULL)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
            count++;
        }
        if (flagoffirst == 0)
        {
            first = q;
            flagoffirst++;
        }
        createlink(x, p, k);
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
    int a[] = {1, 2, 3, 4, 5};
    create(a, 5);
    int k;
    scanf("%d", &k);
    revGroup(first, NULL, NULL, k);
    Display(first);
    return 0;
}