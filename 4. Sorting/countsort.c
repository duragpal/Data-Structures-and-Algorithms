#include <stdio.h>

void countSort(int A[],int k , int n){
    int i , j;
    int B[15],C[100];
    for(i=0;i<=k;i++){
        C[i]=0;
        }
    for (j=1;j<=n;j++){
        C[A[j]]=C[A[j]]+1;
    }
    for(i=1;i<=k;i++){
        C[i]=C[i]+C[i-1];
    }
    for(j=n;j>=1;j--){
        B[C[A[j]]]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
    printf("Sorted Array: ");
    for(i=1;i<=n;i++){
        printf("%d  ",B[i]);
    }
    
}

int main() {
   int n,k=0,A[15],i;
   printf("No. of Elements: ");
   scanf("%d",&n);
   printf("Enter the elements to be sorted: ");
   for(i=1;i<=n;i++){
       scanf("%d",&A[i]);
       if(A[i]>k){
           k=A[i];
       }
   }
   countSort(A,k,n);
   printf("\n");
    return 0;
}
