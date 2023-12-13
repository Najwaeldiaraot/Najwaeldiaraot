//Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main(){
	
	//Deklarasi variabel
	int detik, menit, jam;
	
	 //input dari pengguna
	
	 printf ("Masukkan Detik : ");
	 scanf("%d", &detik);
	 
	
	//Rumus
	jam = detik/3600;
	detik= detik%3600;
	menit= detik/60;
	detik= detik%60;
	
	//Output waktu
	printf("Waktu = %02d:%02d:%02d\n", jam, menit, detik);
	
	return 0;
}
