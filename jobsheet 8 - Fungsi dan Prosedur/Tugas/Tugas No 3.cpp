//Created by 23343079_Najwa Eldiara Owilia Tiksa

#include <stdio.h>
#define PI 3.14

// deklarasi fungsi
float luas(float jariJari);
float keliling(float jariJari);

int main() {
    float jariJari;

    printf("masukkan jari jari dari lingkaran: ");
    scanf("%f", &jariJari);

    printf("Luas Lingkaran: %.2f\n", luas(jariJari));
    printf("Keliling Lingkaran: %.2f\n", keliling(jariJari));

    return 0;
}

// defenisi fungsi
float luas(float jariJari) {
    return PI * jariJari * jariJari;
}

float keliling(float jariJari) {
    return 2 * PI * jariJari;
}
