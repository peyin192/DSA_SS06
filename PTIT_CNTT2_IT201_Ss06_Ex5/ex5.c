#include <stdio.h>

int maxNumber(int a[], int n) {
    if (n == 1) return a[0];
    int r = maxNumber(a, n - 1);
    if (a[n - 1] > r) return a[n - 1];
    return r;
}

int minNumber(int a[], int n) {
    if (n == 1) return a[0];
    int r = minNumber(a, n - 1);
    if (a[n - 1] < r) return a[n - 1];
    return r;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n], i = 0;
    while (i < n) scanf("%d", &a[i++]);
    printf("%d, %d\n", minNumber(a, n), maxNumber(a, n));
    return 0;
}

