// Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main () {
	int pil, batas, i;
	
	printf("Masukkan Pilihan Anda  : \n");
	printf("1. Bilangan Ganjil\n");
	printf("2. Bilangan Genap\n");
	scanf("%d", &pil);
	printf("Masukkan Batasan (0-50): ");
	scanf("%d", &batas);
	
	if (pil==1)
	{
		printf("Deret Bilangan Ganjil : ");
		for (i = 1; i < batas; i++)
		{
			if (i%2!=0)
			printf(" %d ", i);
		}
	} else{
		printf("Deret Bilangan Genap : ");
		for (i = 1; i < batas; i++)
		{
			if (i%2==0)
			printf(" %d ", i);
		}
	}
	
	return 0;
}

