//created by_Najwa Eldiara Owilia Tiksa

#include <stdio.h>

float penjumlahan(float a, float b);
float pengurangan(float a, float b);
float perkalian(float a, float b);
float pembagian(float a, float b);

int main() {
    float num1, num2;

    printf("Masukkan Dua Angka: ");
    scanf("%f %f", &num1, &num2);

    printf("Jumlah: %.2f\n", penjumlahan(num1, num2));
    printf("Selisih: %.2f\n", pengurangan(num1, num2));
    printf("Hasil Kali: %.2f\n", perkalian(num1, num2));
    
    if (num2 != 0) {
        printf("Hasil dari pembagian: %.2f\n", pembagian(num1, num2));
    } else {
        printf("Tidak bisa dibagi dengan nol.\n");
    }

    return 0;
}

// Function definitions
float penjumlahan(float a, float b) {
    return a + b;
}

float pengurangan(float a, float b) {
    return a - b;
}

float perkalian(float a, float b) {
    return a * b;
}

float pembagian(float a, float b) {
    return a / b;
}