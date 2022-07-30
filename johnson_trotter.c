
#include<stdio.h>
#include<conio.h>
void source_removal(int n,int a[10][10])
{
    int i,j,k,u,v,top,s[10],t[10],indeg[10],sum;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
            sum=sum+a[j][i];
        indeg[i]=sum;
    }
    top=-1;
    for(i=0;i<n;i++)
    {
        if(indeg[i]==0)
            s[++top]=i;
    }
    k=0;
    while(top!=-1)
    {
        u=s[top--];
        t[k++]=u;
        for(v=0;v<n;v++)
        {
            if(a[u][v]==1)
            {
                indeg[v]=indeg[v]-1;
                if(indeg[v]==0)
                    s[++top]=v;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",t[i]);
    }
}





void main()
{
    int i,j,a[10][10],n;
    printf("Enter number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the  adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    source_removal(n,a);
}

OUTPUT:

Enter number of nodes:
4
Enter the  adjacency matrix
0 1 1 0
0 0 0 1
0 0 0 1
0 0 0 0
0
2
1
3















Experiment-07

Implement Johnson Trotter algorithm to generate permutations.

#include <stdio.h>
#include <stdlib.h>
int swap(int *a,int *b)
{
     int t = *a;
    *a = *b;
    *b = t;
}
int search(int arr[],int num,int mobile)
{
    int g;
    for(g=0;g<num;g++)
    {
        if(arr[g] == mobile)
        {
             return g;
        }
    }
    return -1;
}

int find_Moblie(int arr[],int d[],int num)
{
    int mobile = 0;

    int i;
    for(i=0;i<num;i++)
    {
        if((d[arr[i]-1] == 0) && i != 0)
        {
            if(arr[i]>arr[i-1] && arr[i]>mobile)
            {
                mobile =  arr[i];

            }

        }
        else if((d[arr[i]-1] == 1) & i != num-1)
        {
            if(arr[i]>arr[i+1] && arr[i]>mobile)
            {
                mobile = arr[i];
            }
        }
    }
    if(mobile == 0)
        return 0;
    else
        return mobile;
}
void permutations(int arr[],int d[],int num)
{
    int i;
    int mobile = find_Moblie(arr,d,num);
    int pos = search(arr,num,mobile);
    if(d[arr[pos]-1]==0)
        swap(&arr[pos],&arr[pos-1]);
    else
        swap(&arr[pos],&arr[pos+1]);
    for(int i=0;i<num;i++)
    {
        if(arr[i] > mobile)
        {
            if(d[arr[i]-1]==0)
                d[arr[i]-1] = 1;
            else
                d[arr[i]-1] = 0;
        }
    }
    for(i=0;i<num;i++)
    {
        printf(" %d ",arr[i]);
    }
}

int factorial(int k)
{
    int f = 1;
    int i = 0;
    for(i=1;i<k+1;i++)
    {
        f = f*i;
    }
    return f;
}


int main()
{
    int num = 0;
    int i;
    int j;
    int z = 0;
    printf("Johnson trotter algorithm to find all permutations of given numbers \n");
    printf("Enter the number\n");
    scanf("%d",&num);
    int arr[num],d[num];
    z = factorial(num);
    printf("The total permutations are %d",z);
    printf("\nAll possible permutations are: \n");
    for(i=0;i<num;i++)
    {
        d[i] = 0;
        arr[i] = i+1;
        printf(" %d ",arr[i]);
    }
    printf("\n");
    for(j=1;j<z;j++)
    {
        permutations(arr,d,num);
        printf("\n");
    }
    return 0;
}
