#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<n-1; i++)
    {
        int temp;
        int min=i;

        for(int j=i+1;i<n;j++)
        {
            if(a[j]<a[min])
                { min=j;}
        }

        if(min!=i)
        {
            temp    = a[min];
            a[min]  = a[i];
            a[i]    = temp;
        }


    }
}
