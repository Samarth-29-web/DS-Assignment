/*************************************************************************************

        Insertion sort puts that element to the front whichever order 
        the array is to be sorted. If it is to be sorted in ascending order 
        then if it does encounter a number smaller than 
        the one on which pointer is currently pointing to
        then it is inserted to the beginning.

*************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
/*****                 DRIVER FUNCTION                 *****/
int main()
 {
   int n;
   printf("Enter the size of the array:");
   scanf("%d",&n);
   int *ptr;
   ptr=(int *)malloc(n*sizeof(int));
   printf("Enter the numbers:");
   for(int a=0;a<n;a++)
       scanf("%d",&ptr[a]);
   for(int b=1;b<n;b++)
   {
	   int x=ptr[b];
	   for(int c=b-1;c>=0;c--)
	   {
		   if(x<ptr[c])
		   {
			   ptr[c+1]=ptr[c];
			   ptr[c]=x;
		   }
		   else
		      break;
	   }
   }
   for(int d=0;d<n;d++)
	   printf("%d  ",ptr[d]);
 }
