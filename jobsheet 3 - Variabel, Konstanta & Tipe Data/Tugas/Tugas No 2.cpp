// Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main ()
{ 
	
	//deklarasi :*
    float c, k, f, r;

    // User memasukan suhu dalam Celsius yang ingin dikonversi
    printf("Masukkan Suhu dalam satuan Celcius = ");
    scanf("%f", &c);

    // Konversi suhu ke Kelvin, Fahrenheit, dan Reamur
    k = c + 273.15;
    f = (c * 1.8) + 32;
    r = c * 0.8;

    // Menampilkan hasil konversi yang telah dimasukkan user sebelumnya
    printf("suhu dalam celcius = %.2f\n", c);
    printf("Suhu dalam Kelvin = %.2f \n", k);
    printf("Suhu dalam Fahrenheit = %.2f\n", f);
    printf("Suhu dalam Reamur = %.2f\n", r);

    return 0;
}
