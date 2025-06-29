#include <stdio.h>
void binaryNumber (int n) {
    if (n == 0) {
        return;
    } else {
        binaryNumber(n / 2);
        printf("%d", n % 2);
    }
}
int main() {
    int numberInput;
    printf("Nhap so can doi: ");
    scanf("%d", &numberInput);

    binaryNumber(numberInput);
}