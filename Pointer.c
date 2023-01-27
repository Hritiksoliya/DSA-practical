#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;

    ptr = &x;  // ptr now points to the memory location of x

    printf("Value of x: %d\n", x);
    printf("Value stored at ptr: %d\n", *ptr);
    printf("Memory address of x: %p\n", &x);
    printf("Memory address stored in ptr: %p\n", ptr);

    return 0;
}
