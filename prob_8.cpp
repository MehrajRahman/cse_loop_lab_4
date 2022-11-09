#include <stdio.h>

int main()
{

    int  n, result = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        int remainder = n % 10;  
        result = result * 10 + remainder;    
        n /= 10;
    }

    printf("%d", result);

    return 0;


}
