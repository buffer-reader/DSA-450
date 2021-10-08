#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *s;
};
void create(struct stack *st1, int n)
{
    st1->size = n;
    st1->top = -1;
    st1->s = (char *)malloc(st1->size * sizeof(char));
}
void push(struct stack *st1, char x)
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
void display(struct stack sq)
{
    for (int i = sq.top; i >= 0; i--)
    {
        printf("%c ", sq.s[i]);
    }
}
int main()
{
    char a[100];
    printf("enter a string\n");
    scanf("%[^\n]s", a);
    int l = strlen(a);
    struct stack sq;
    create(&sq, l);
    for (int i = 0; i < l; i++)
    {
        push(&sq, a[i]);
    }
    display(sq);

    return 0;
}