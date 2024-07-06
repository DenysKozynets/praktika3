#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    if (r < 1 || r > 30) {
        return 1;
    }
    long long A[31] = {0}, B[31] = {0}, C[31] = {0};
    A[1] = 2;  // 5, 9
    B[1] = 0;
    C[1] = 0;

    for (int n = 2; n <= r; n++) {
        A[n] = B[n-1] + C[n-1];            
        B[n] = A[n-1];                      
        C[n] = A[n-1] * 2;                  
    }
    long long result = A[r] + B[r] + C[r];

    printf("%lld\n", result);

    return 0;
}
