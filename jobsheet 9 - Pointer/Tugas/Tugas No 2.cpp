// Created by Najwa Eldiara Owilia Tiksa_23343079

#include <stdio.h>

int main(){

  char huruf[1000], hasil[1000];
  int i, jumlahstring, jumlah = 0;

  printf("Kalimat Masukan: ");
  fgets(huruf, sizeof(huruf), stdin);

  while (huruf[jumlah] != '\0'){
    jumlah++;
  }

  jumlahstring = jumlah - 1;

  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }

  hasil[i] = '\0';

  printf("Kebalikannya: %s \n", hasil);

  return 0;
}