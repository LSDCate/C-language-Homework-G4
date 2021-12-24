#include<stdio.h>
int main()
{
	int n1,n2;
	scanf("%d\n%d",&n1,&n2);
	if((n1>10 || n1<1) || (n2>10 || n2<1))
	{
		return 0;
	}
	switch(n1)
	{
		case 1: printf("one\n"); break;
		case 2: printf("two\n"); break;
		case 3: printf("three\n"); break;
		case 4: printf("four\n"); break;
		case 5: printf("five\n"); break;
		case 6: printf("six\n"); break;
		case 7: printf("seven\n"); break;
		case 8: printf("eight\n"); break;
		case 9: printf("nine\n"); break;
		case 10: printf("ten\n"); break;
	}
	switch(n2)
	{
		case 1: printf("one\n"); break;
		case 2: printf("two\n"); break;
		case 3: printf("three\n"); break;
		case 4: printf("four\n"); break;
		case 5: printf("five\n"); break;
		case 6: printf("six\n"); break;
		case 7: printf("seven\n"); break;
		case 8: printf("eight\n"); break;
		case 9: printf("nine\n"); break;
		case 10: printf("ten\n"); break;
	}
	if(n1%2==0)printf("even\n");
	else printf("odd\n");
	if(n2%2==0)printf("even\n");
	else printf("odd\n");
	return 0;
}
