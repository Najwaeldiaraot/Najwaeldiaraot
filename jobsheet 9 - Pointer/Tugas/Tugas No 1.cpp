// Created by Najwa Eldiara Owilia Tiksa_23343079

#include <stdio.h>

void pola(char *str) {
    char *ptr = str;

    while (*ptr != '\0') {
        printf("%s\n", ptr);
        ptr++;
    }
}

int main() {
    char str[] = "BORLAND";
    pola(str);

    return 0;
}
