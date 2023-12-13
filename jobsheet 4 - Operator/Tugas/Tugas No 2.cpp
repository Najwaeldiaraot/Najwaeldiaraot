#include <stdio.h>
// Created by 23343079_Najwa Eldiara Owilia Tiksa

int main () {
	 char namaPembeli[20];
	 char namaBarang[15];
	 float hargaBarang;
	 int jumlahBarang;
	 float hargaTotal;
	 
	 printf ("Masukkan Nama Pembeli : ");
	 scanf("%s", &namaPembeli);
	 printf ("Masukkan Nama Barang : ");
	 scanf("%s", &namaBarang);
	 printf("Masukkan Harga Barang Satuan : ");
	 scanf("%f", &hargaBarang);
	 printf("Masukkan Jumlah Barang yang Dibeli : ");
	 scanf ("%d", &jumlahBarang);
	
	// rumus harga total
	hargaTotal = hargaBarang * jumlahBarang;
	
	//hasil harga total
	printf("Harga Total = %f\n", hargaTotal);
	
	return 0;
}
