#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int binary_search(int a[],int low,int high,int key)
{
    while(low<=high)
    {
    int mid=((low+high)/2);
    if(a[mid]==key)
      return mid;
    if(a[mid]<key)
      low=mid + 1;
    else
      high=mid-1;
    }
    return -1;
}
void main()
{
    int a[5000],key,i,pos,b,n;
    clock_t end,start,t;
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
    pos=binary_search(a,0,n,key);
    if(pos==-1)
        printf("Element not found in an array");
    else
        printf("Element found\n");
    end=clock();
    printf("Time taken to search an given element in an array of is %f\n",(((double)(end-start))/CLOCKS_PER_SEC));
}
