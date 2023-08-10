#include <stdio.h>


int main()
{
    for(int i=0;i<n;i++)
    {
        key=a[i]        //a[] is the array to be sorted
        j=i-1;

        while(j>=0 && a[i]>key)
        {
            a[j+1]=a[j];
            j--;

        }

        a[j+1]=key;
    }

}
