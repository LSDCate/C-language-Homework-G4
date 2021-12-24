#include<stdio.h>
int main()
{
	int a = 66528,b = 52920,c;
	while(c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d",b);
	return 0;
}
