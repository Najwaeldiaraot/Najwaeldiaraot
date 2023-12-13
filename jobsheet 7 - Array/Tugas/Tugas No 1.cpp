//Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main(){
  int i, n, data[20];
  float rata, total;

  printf("Masukkan banyak mahasiswa: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Data ke-%d : ", i+1);
    scanf("%d", &data[i]);
    total += data[i];
  }
  
  rata = total / n;
  printf("Rata-rata seluruh mahasiswa %.2f\n\n\n", rata);

  return 0;
}
