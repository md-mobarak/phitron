#include <stdio.h>

int sumArray(int A[], int N, int i) {
    if (N == i) {
        return 0;
    }
    int sum_rest = sumArray(A, N, i + 1);
    // printf("%d\n",sum_rest);
     
    int total_sum = A[i] + sum_rest; 
    return total_sum;
}

int main() {
    int N;

    
    scanf("%d", &N);

    int A[N];


    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

   
    int result = sumArray(A, N, 0);

    // Print the result
    printf("%d", result);

    return 0;
}
