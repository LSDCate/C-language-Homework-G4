#include <stdio.h>
int main()
{
    int N, n, i, carry, size, mul;
    int res[3000];
 
    printf("\nEnter number to calculate factorial: ");
    scanf("%d", &N);
 
    res[0] = 1;
    carry = 0;
    size = 1;
 
    for(n = 2; n <= N; n++)
    {
        for(i = 0; i < size; i++)
        {
            mul = (res[i] * n) + carry;
            res[i] = mul % 10;
            carry = mul / 10;
        }
 
        while(carry > 0)
        {
            res[size++] = carry % 10;
            carry /= 10;
        }
    }
 
    printf("\nFactorial = ");
    for(i = size-1; i >= 0; i--)
        printf("%d", res[i]);
 
    return 0;
}
