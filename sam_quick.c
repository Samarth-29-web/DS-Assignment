/***************************************************************************

          QuickSort is a Divide and Conquer algorithm. 
          It picks an element as pivot and 
          partitions the given array around the picked pivot. 
          The key process in quickSort is partition().

***************************************************************************/
#include<stdio.h>
#include<stdlib.h>
   /*   Swapping two numbers using pointers        */
void swap(int *p,int *q)
{
       int temp=*p;
	*p=*q;
	*q=temp;
}
   /*   Division of the array into sub-arrays      */
int partition(int *a,int lb,int ub)
{
   int temp=a[lb];
   int start=lb;
   int end=ub;
    while(start<end)
    {
           while((a[start]<=temp)&&(start<=ub))
                   start++;
           while((a[end]>temp)&&(end>=lb))
                   end--;
           if(start<end)
              swap(&a[start],&a[end]);
     }
     swap(&a[lb],&a[end]);
     return end;
}
      /*   SORTING ALGORITHM(Soul of the program)  */
void quicksort(int *a,int lb,int ub)
{
   if(lb<ub)
   {
      int local=partition(a,lb,ub);
      quicksort(a,lb,local-1);
      quicksort(a,local+1,ub);
   }
}
/*****                   DRIVER FUNCTION                 *****/
int main()
{
   int *a,n;
   printf("Enter size of the array:");
   scanf("%d",&n);
   a=(int *)malloc(n*sizeof(int));
   printf("Enter the numbers:");
   for(int y=0;y<=n-1;y++)
	   scanf("%d",&a[y]);
    quicksort(a,0,n-1);
    for(int x=0;x<n;x++)
      printf(" %d\n",a[x]);
}

