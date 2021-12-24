#include<stdio.h>
int main()
{
  	char c[200], s[200];
  	int i, j = 0;

  	printf("Enter a string to delete vowels(A,E,I,O,U):");
  	gets(c);

  	for (i = 0; c[i] != '\0'; i++) 
  	{
		if (c[i] != 'A' && c[i] != 'E' && c[i] != 'I' && c[i] != 'O' && c[i] != 'U' && 
		c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u') 
		{    
      		s[j] = c[i];
      		j++;
   		}
  	}
  	s[j]='\0';

  	printf("\nString after deleting vowels(A,E,I,O,U): %s\n", s);
  	return 0;
}
