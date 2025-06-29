#include <stdio.h>
int sum (int n) {
    if (n == 0) return 0;
    else return (n % 10) + sum(n / 10);
}
int main() {
    int numberInput;
    printf("Nhap so: ");
    scanf("%d", &numberInput);

    int result = sum(numberInput);
    printf("%d", result);

}