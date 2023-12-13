//Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main(){
	int bil;
	
	printf("Masukkan baris angka : ");
	scanf("%d",&bil);
	
	for(int i = 1; i < bil+1; i++){
		for(int j = 1; j < i+1; j++){
			printf("%d " ,i*j);
		}
		printf("\n");
	}
	
	return 0;
}
