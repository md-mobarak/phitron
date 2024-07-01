#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int S = n - 1;
    int T = 1;

    for (int i = 1; i <= n * 2; i++)
    {
        for (int j = 0; j < S; j++)
        {

            printf(" ");
        }
        for (int j = 0; j < T; j++)
        {

            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("*");
            }
        }
        if (i < n)
        {
            T = T + 2;
            S--;
        }
        else if (i >= n)
        {
            T = T - 2;
            S++;
        }

        printf("\n");
    }

    return 0;
}