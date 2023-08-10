#include<stdio.h>
#include<stdlib.h>

void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;


}

int main()
{
    int n;
    scanf("%d",&n);

    int* array=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
       printf("%d ",array[i]);

    }

    return 0;

}
