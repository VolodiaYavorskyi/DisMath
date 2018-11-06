#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = 100;
    int A[n];
    int B[n];
    // matrix
    int C[n][n];
    
    do
    {
        printf("Enter the number of elements in A and B: ");
        n = GetInt();
    } while (n < 1);
    
    // initialisation of A and B
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i + 1);
        A[i] = GetInt();
    }
    for (int i = 0; i < n; i++)
    {
        printf("B[%d] = ", i + 1);
        B[i] = GetInt();
    }
    
    // matrix
    for (int i = 0; i < n; i++)
    {
        printf("| ");
        for (int j = 0; j < n; j++)
        {
            if(A[i] > 2*B[j])
            {
                C[i][j] = 1;
                printf("%d ", C[i][j]);
            }
            else 
            {
                C[i][j] = 0;
                printf("%d ", C[i][j]);
            }
        }
        printf("|");
        printf("\n");
    }
    
    // reflexivity
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(C[j][j] == 1)
            {
                printf("reflexive");
            }
            else
            {
                printf("not reflexive");
            }
        }
        printf("\n");
    }
}
