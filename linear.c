#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int linear_search(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==key)
        return i;
    return -1;
}
void main()
{
    int a[5000],key,n,i,pos,t;
    clock_t end,start;

    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the elements of an array:\n");
    for(i=0;i<n;i++)
    {
        a[i]=i;
        printf("%d\n",a[i]);
    }
    printf("Enter the element to be found:\n");
    scanf("%d",&key);
    start=clock();
    for(int j=0;j<5000000;j++)
        t=800/800;
    pos=linear_search(a,n,key);
    if(pos==-1)
        printf("Element not found in an array");
    else
        printf("Element found");
    end=clock();
    printf("Time taken to search an given element in an array of %f\n",(((double)(end-start))/CLOCKS_PER_SEC));
}
