#include <stdio.h>

int is_bit_set(unsigned long int n, unsigned int index) {
    if (index >= sizeof(n) * 8)
    {
        return -1;
    }
    return (n & (1 << index)) != 0;
}

int main() {
    unsigned long int number = 295;
    unsigned int index = 63;

    int result = is_bit_set(number, index);
    if (result == -1) {
        printf("Index out of bounds\n");
    } else {
        printf("Bit at index %u is %s\n", index, result ? "set (1)" : "cleared (0)");
    }

    return 0;
}
