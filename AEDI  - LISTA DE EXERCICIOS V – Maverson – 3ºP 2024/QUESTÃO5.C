#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mcd(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;
    printf("O MCD de %d e %d e: %d\n", num1, num2, mcd(num1, num2));
    return 0;
}
