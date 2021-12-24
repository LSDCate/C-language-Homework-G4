#include<stdio.h>
int main()
{
	char c;
	while((c=getchar())!='\n')
	{
		if(c>='A' && c<='Z') c+='b'-'B'; 
		else if(c>='a' && c<='z') c-= 'b'-'B';
		putchar(c);
	}
	return 0;
}
