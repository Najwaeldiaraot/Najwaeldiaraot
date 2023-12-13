// Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main() {
    float diameter = 12.0;  // Diameter bola dalam cm
    float radius = diameter / 2.0;  // Radius bola dalam cm
    const double PHI = 3.14;

    // Menghitung volume bola
    float volume = (4.0 / 3.0) * PHI * radius * radius * radius;

    // Menghitung luas permukaan bola
    float luas_permukaan = 4 * PHI * radius * radius;

    // Menampilkan hasil perhitungan
    printf("Volume Bola = %.2f cm^3\n", volume);
    printf("Luas Permukaan Bola = %.2f cm^2\n", luas_permukaan);

    return 0;
}
