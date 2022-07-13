#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int linear(int arr[],int key,int i,int n)
{
    int pos;
    if(key>=n)
        return -1;
    else
    if(arr[i]==key)
    {
        pos=i+1;
        return pos;
    }
    else
         return linear(arr,key,i+1,n);
    return pos;
}
void main()
{
    int n,key,pos,a[30000],i,t;
    clock_t end,start;
    printf("Enter the number of elements in the array  ");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        a[i]=i;
        printf("%d\n",a[i]);
    }
    printf("Enter the element to search  ");
    scanf("%d", &key);
    start=clock();
     for(int j=0;j<5000000;j++)
        t=800/800;
    pos=linear(a,key,0,n);
    if (pos!=-1)
        printf("Element found at pos %d ", pos);
    else
        printf("Element not found");
    end=clock();
    printf("Time taken to search an given element in an array of is %f\n",(((double)(end-start))/CLOCKS_PER_SEC));

}
