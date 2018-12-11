#include <stdio.h>

void combinations(int n);
int koef(int k);

int main()
{
    printf("\n");

    int n;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 1);
    
    printf("Our set: {");
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf("; ");
        }
    }
    printf("}\n");
    
    combinations(n);
    
    printf("(x + y)^11 = ");
    for (int i = 0; i <= 11; i++)
    {
        printf("%dx^%dy^%d ", koef(i), 11 - i, i);
        if (i != 11)
            printf("+ ");
    }
    
    printf("\n\n");
    return 0;
}

int koef(int k)
{
    int a, b, c, result;
    
    a = 11;
    b = 11 - k;
    c = k;
    
    for (int i = a - 1; i > 0; i--)
    {
       a *= i;
    }
    
    if (b)
    {
        for (int i = b - 1; i > 0; i--)
        {
            b *= i;
        }
    }
    else
        b = 1;
    
    if (c)
    {
        for (int i = c - 1; i > 0; i--)
        {
            c *= i;
        }
    }
    else
        c = 1;
        
    result = a / b / c;
    
    return result;
}

void combinations(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d;\n", i);
    }
    
    for (int a1 = 1; a1 <= n; a1++)
    {
        for (int a2 = 1; a2 <= n; a2++)
        {
            if (a1 < a2)
            {
                printf("%d; %d;\n", a1, a2);
            }
        }
    }
    
    for (int a1 = 1; a1 <= n; a1++)
    {
        for (int a2 = 1; a2 <= n; a2++)
        {
            for (int a3 = 1; a3 <= n; a3++)
            {
                if (a1 < a2 && a2 < a3)
                {
                    printf("%d; %d; %d;\n", a1, a2, a3);
                }
            }
        }
    }
    
    for (int a1 = 1; a1 <= n; a1++)
    {
        for (int a2 = 1; a2 <= n; a2++)
        {
            for (int a3 = 1; a3 <= n; a3++)
            {
                for (int a4 = 1; a4 <= n; a4++)
                {
                    if (a1 < a2 && a2 < a3 && a3 < a4)
                    {
                        printf("%d; %d; %d; %d;\n", a1, a2, a3, a4);
                    }
                }             
            }
        }
    }
    printf("\n");
}
