#include <stdio.h>
void fibonacciArr (int i, int fibonacci[], int n, int pre, int curr) {
    if (i >= n) return;
    if (i == 0) fibonacci[i] = 0;
    else if (i == 1) fibonacci[i] = 1;
    else fibonacci[i] = pre + curr;
    fibonacciArr(i + 1, fibonacci, n, curr, fibonacci[i]);
}
void printArr(int i, int arr[]) {
    if (i < 0) return;
    printf("%d", arr[i]);
    printArr(i - 1, arr);
}
int main (void) {
    int n;
    printf("Nhap so luong can nhap: ");
    scanf("%d", &n);
    int fibonacci[n];
    fibonacciArr(0, fibonacci, n, 0, 1);
    printArr(n -1, fibonacci);
    return 0;
}