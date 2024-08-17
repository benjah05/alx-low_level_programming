#include <stdio.h>

int main() {
    const char *output = 
        "ELF Header:\n"
        "  Magic:   7f 45 4c 46 01 01 01 53 00 00 00 00 00 00 00 00\n"
        "  Class:                             ELF32\n"
        "  Data:                              2's complement, little endian\n"
        "  Version:                           1 (current)\n"
        "  OS/ABI:                            \n"
        "  ABI Version:                       0\n"
        "  Type:                              EXEC (Executable file)\n"
        "  Entry point address:               0x80484c0\n";

    // Print each character and its ASCII value
    for (int i = 0; output[i] != '\0'; i++) {
        printf("Character: '%c', ASCII Value: %d\n", output[i], output[i]);
    }

    return 0;
}

