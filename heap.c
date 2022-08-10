#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
void heapify_function(int arr[])
{
    int i,n;
    n=arr[0];
    for(i=n/2;i>=1;i--)
    adjust(arr,i);
}
void adjust(int arr[],int i)
{
    int j,temp,n,k=1;
    n=arr[0];
    while(2*i<=n && k==1)
    {
       j=2*i;
       if(j+1<=n && arr[j+1] > arr[j])
           j=j+1;

       if( arr[j] < arr[i])
           k=0;
       else
       {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           i=j;
        }
      }
}

void main()
{
int arr[10000],n,temp,last,i;
clock_t start,end;
printf("Enter the no. of array elements \n");
scanf("%d",&n);
printf("Enter Elements in array:\n");
for(i=1;i<=n;i++)
{
    arr[i]=rand()%100;
    printf("%d\t",arr[i]);
}
arr[0]=n;
start = clock();
heapify_function(arr);
end = clock();
while(arr[0] > 1)
{
    last=arr[0];
    temp=arr[1];
    arr[1]=arr[last];
    arr[last]=temp;
    arr[0]--;
    adjust(arr,1);
}

printf("\nArray After Heap Sort\n");
for(i=1;i<=n;i++)
printf("%d\t",arr[i]);
printf("\nTime taken to sort is %f",(double)(end-start)/CLOCKS_PER_SEC);
}