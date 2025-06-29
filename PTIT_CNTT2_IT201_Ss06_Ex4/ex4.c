#include <stdio.h>
void towerofHanoi(int n, char first, char second, char third) {
    if (n == 1) {
        printf("Dia 1 chuyen tu %c sang %c\n", first, third);
        return;
    }

    towerofHanoi(n - 1, first, third, second);
    printf("Dia %d chuyen tu %c sang %c\n", n, first, third);
    towerofHanoi(n - 1, second, first, third);
}
int main () {
    int numberInput;
    printf("Nhap so dia: ");
    scanf("%d", &numberInput);

    towerofHanoi(numberInput, 'A', 'B', 'C');
}