#include<stdio.h>
int main(){
    int a[][2] = {{2, -1}, {1, 3}};
    int b[][2] = {{1, 2}, {3, 4}};
    int result[2][2];
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j]=0;
            for(k=0;k<2;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }


for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
    }