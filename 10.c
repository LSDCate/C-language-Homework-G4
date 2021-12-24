#include<stdio.h>
int main()
{
	int i,n,sum = 0,N[10];
	printf("Please input five digits number:");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		N[i] = n%10;
		n /= 10;
		sum += N[i];
	}
	printf("The sum of the five digits number is: %d",sum);
	return 0;
}
