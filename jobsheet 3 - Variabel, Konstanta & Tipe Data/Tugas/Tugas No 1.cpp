// Created by 23343079_Najwa Eldiara Owilia Tiksa

#include <stdio.h>

int main() {
	//deklarasi :*
    float nilaiTukar = 14250.0;  // nilai kurs 1$ = Rp. 14.250
    float jumlahYangditukar = 2500000.0;  // Jumlah uang dalam Rupiah

    // Konversi Rupiah ke Dollar
    float jumlahyangditukar = jumlahYangditukar / nilaiTukar;

    printf("Jumlah uang dollar yang akan diberikan : $%.2f\n", jumlahyangditukar);
    
    return 0;
}
