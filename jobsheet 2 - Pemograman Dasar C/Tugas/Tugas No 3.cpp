// Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main() {
	//Deklarasi variabel
	double panjangAlas = 8.0;
	double tinggi = 5.0;
	double luas;
	
	//menghitung luas segitiga
	luas = 0.5 * panjangAlas * tinggi;
	
	//menampilkan hasil dari perhitungan luas segitiga
	printf("Panjang Alas      = %.2lf cm\n", panjangAlas);
	printf("Tinggi            = %.2lf cm\n", tinggi);
	printf("Maka,Nilai Luas Segitiga Adalah %.2lf cm^2\n", luas);
	
	return 0;
}