#include <stdio.h>
#include <cs50.h>

int main()
{           
    int n = 100, m = 100, k = 0, p = 0;   
    int A[n];
    int B[n];
    int I[100];
    int SD[100];
    
    printf("Enter the amount of elemens in array A:");
    n = GetInt();
    
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        A[i] = GetInt();
    }
    
    printf("A = ");
    for (int i = 0; i < n; i++)
        printf("%d; ", A[i]);
    printf("\n");
    
    printf("Enter the amount of elemens in array B:");
    m = GetInt();
    
    for (int i = 0; i < m; i++)
    {
        printf("B[%d] = ", i);
        B[i] = GetInt();
    }
    
    printf("B = ");
    for (int i = 0; i < m; i++)
        printf("%d; ", B[i]);
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(A[i] == B[j])
            {
                I[k] = A[i];
                k++;
                break;
            }
        }
    }
    printf("I = ");
    for (int i = 0; i < k; i++)
        printf("%d; ", I[k]);
    printf("\n");
    
    printf("SD = ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(SD[p] == B[j])
                break;
            
            if(j == m - 1)
            {
                SD[p] = A[i];
                printf("%d; ", SD[p]);
                p++; 
            }
        }
    }
    printf("\n");
    
    return 0;
}
