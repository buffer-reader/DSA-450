#include <stdio.h>
#include <math.h>
#define int_min -2147483648
int findMax(int a[], int n, int k)
{
    int max = int_min;
    int max_index;
    int count = 0;
    while (count < k)
    {
        for (int i = 0; i < n ; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                max_index = i;
            }
        }
        count++;
        if(count==k)
        {
            return max_index;
        }
        else
        {
            a[max_index]=int_min;
            max=int_min;
        }
    }
}
//same logic for min
int main()
{
    int a[]={1,2,3,4,5,9};
    int k=findMax(a,6,1);
    printf("%d\n",a[k]);

    return 0;
}