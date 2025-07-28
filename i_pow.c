#include <stdio.h>

long long int ipow(long long int a, unsigned int n, unsigned int* depth);

int main() {
    int a, b;
    unsigned int d = 0;
    long long int num;
    scanf("%d%d", &a, &b);

    num = ipow(a, b, &d);
    num = ipow(a, b, &d);
    printf("%lld %u", num, d);
    return 0;
}

long long int ipow(long long int a, unsigned int n, unsigned int* depth) {
    *depth = 0;
    if (n == 0) {
        (*depth) += 1;
        // printf("%lld %u\n", a, n);
        return 1;
    } else if (n == 1) {
        (*depth) += 1;
        // printf("%lld %u\n", a, n);
        return a;
    } else {
        if (n % 2 == 0) {
            // printf("%lld %u\n", a, n);
            long long int t = ipow(a, n / 2, depth);
            (*depth) += 1;
            return t * t;
        } else {
            // printf("%lld %u\n", a, n);
            long long int t = a * ipow(a, n - 1, depth);
            (*depth) += 1;
            return t;
        }
    }
}
