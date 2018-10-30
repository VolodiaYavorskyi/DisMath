#include <stdio.h>
#include <cs50.h>

int main()
{           
    int n = 100, m = 100, k = 0, p = 0;
    char A[n];
    char B[n];
    char I[100];
    char SD[100];
    
    printf("Enter the amount of elemens in array A:");
    n = GetInt();
    
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i + 1);
        A[i] = GetChar();
    }
    
    printf("A = ");
    for (int i = 0; i < n; i++)
        printf("%c; ", A[i]);
    printf("\n");
    
    printf("Enter the amount of elemens in array B:");
    m = GetInt();
    
    for (int i = 0; i < m; i++)
    {
        printf("B[%d] = ", i + 1);
        B[i] = GetChar();
    }
    
    printf("B = ");
    for (int i = 0; i < m; i++)
        printf("%c; ", B[i]);
    printf("\n");
    
    printf("I = ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(A[i] == B[j])
            {
                I[k] = A[i];
                printf("%c; ", I[k]);
                k++;
                break;
            }
        }
    }           
    printf("\n");
    
    printf("SD = ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(A[i] == B[j])
                break;
           
            if(j == (m - 1))
            {
                SD[p] = A[i];
                printf("%c; ", SD[p]);
                p++; 
            }
        }
    }
    p = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(B[i] == A[j])
                break;
           
            if(j == (m - 1))
            {
                SD[p] = B[i];
                printf("%c; ", SD[p]);
                p++; 
            }
        }
    }
    printf("\n");
    
    return 0;
}
