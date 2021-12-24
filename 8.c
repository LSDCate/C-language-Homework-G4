#include <stdio.h>
int main()
{
   int i,n,a,b,j;
   printf("Enter : ");
   scanf("%d",&n);
   printf("\n");
   for(i=1;i<n;i++)
   {
		for(j=n-1;j>=i;j--)
		{
        	if(j>i)printf(" ");		
        	else
			{
            	for(a=1;a<=j;a++)printf("*");
            	for(b=1;b<=j;b++)printf("*");
   			} 
 		}
		for(j=n-1;j>=i;j--)
		{
        	printf(" ");
        	if(j>i) printf(" ");
        	else
			{
            	for(a=1;a<=j;a++) printf("*");
            	for(b=1;b<=j;b++) printf("*");
   			} 
 		}
	printf("\n");
   	}
   	int N=2*n;
   	for(i=1;i<N;i++)
   	{
    	for(j=1;j<=i;j++)
	 	{  
    		if(j<i) printf(" "); 
       		else
	   		{
            	for(a=N-1;a>=j;a--)printf("*");
            	for(b=N-2;b>=j;b--)printf("*");
       		}
     	}
     printf("\n");
   }
   return 0; 
   }
