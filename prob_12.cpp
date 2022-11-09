#include <stdio.h>
int main()
{
    int n, nth = 1, sum = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 && i != n)
        {
            printf("%d, ", sum);
        }
        else if (i == 2 && i != n)
        {
            printf("%d, ", sum);
        }
        else if (i == n)
        {

            if (i > 2)
            {
                sum = sum + nth;
                nth = sum - nth;
                printf("%d\n", sum);
            }
            else
            {

                printf("%d\n", sum);
            }
        }
        else
        {
            sum = sum + nth;
            nth = sum - nth;
            printf("%d, ", sum);
        }
    }

    return 0;
}