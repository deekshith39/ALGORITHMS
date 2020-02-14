#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,pos,key,a[10],mid,beg,end;
         int max,min,p,q;
         p=q=-1;

    printf("enter the no of elements =");
    scanf("%d",&n);
    printf("enter the elements into the array =");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }
    printf("enter the element to be searched - ");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {

        if(a[mid]==key)
        {
            break;

        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            beg=beg+1;

        }

        mid=(beg+end)/2;

    }

    max=mid;
    min=mid;

    while(max<=(n-1))
    {
        if(a[max]==key)
            {
             p=max;

            }
            max++;
    }
    while(min>=0)
    {

        if(a[min]==key)
        {
            q=min;
        }
        min--;
    }


    printf("the first and last occurrence of the key element is %d and %d",q+1,p+1);
}
