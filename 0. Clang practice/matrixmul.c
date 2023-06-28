
#include <stdio.h>
int printArr(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void MatrixMul(int matA[2][2], int matB[2][2], int result[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    printArr(result);
}
int main()
{
    int a[][2] = {{2, -1}, {1, 3}};
    int b[][2] = {{1, 2}, {3, 4}};
    int result[2][2];

    printArr(a);
    printArr(b);
    MatrixMul(a, b, result);

    return 0;
}