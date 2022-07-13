#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void selection_sort(int n,int a[])
{
    int i,j,t,s,pos;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        s=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[j]<s)
            {
                s=a[j];
                pos=j;
            }
        }
    t=a[i];
    a[i]=a[pos];
    a[pos]=t;
    }
}
void main()
{
    int a[10000],n,t,i;
    clock_t end,start;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
      a[i]=rand()%50;
      printf("%d\n",a[i]);
    }
    start=clock();
    for(int j=0;j<5000000;j++)
        t=900/900;
    selection_sort(n,a);
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]]);
    }
     end=clock();
     printf("Time taken to search an given element in an array of is %f\n",(((double)(end-start))/CLOCKS_PER_SEC));
}


