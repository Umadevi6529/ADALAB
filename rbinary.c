#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int binary(int a[],int low,int high)
{
    int key,mid;
    mid=((low+high)/2);
    if(low>high)
        return -1;
    if(key<a[mid])
        return(a,0,mid-1);
    else
        return(a,mid+1,high);
}
void main()
{
    int a[30000],n,key,pos,i,t;
    clock_t end,start;
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter the elements of an array:\n");
    for(i=0;i<n;i++)
    {
        a[i]=i;
        printf("%d\n",a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&key);
    start=clock();
    pos=binary(a,0,n-1);
    for(int j=0;j<5000000;j++)
        t=900/900;
    if(pos==-1)
        printf("Element is not found in an array\n");
    else
        printf("Element is found in an array\n");
     end=clock();
    printf("Time taken to search an given element in an array of is %f\n",(((double)(end-start))/CLOCKS_PER_SEC));
}
