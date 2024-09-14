#include <stdio.h>

void functionA(int n);
void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        printf("%d ", n);
        functionB(n - 1); // Calls function B
    }
}

void functionB(int n) {
    if (n > 0) {
        printf("%d ", n);
        functionA(n - 1); // Calls function A
    }
}

int main() {
    int num = 5;
    functionA(num);
    printf("\n");
    return 0;
}
