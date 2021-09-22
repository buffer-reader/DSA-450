//reverse an array
#include<stdio.h>
#include<math.h>
void reverse(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}
int main()
{
    int a[]={1,2,3,4,5};
    reverse(a,5);
    display(a,5);

return 0;
}