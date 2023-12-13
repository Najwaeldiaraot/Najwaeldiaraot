//Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main(){
	int i,n;
	char nama[30][30];
	
	printf("Masukkan banyak siswa : ");
	scanf("%d", &i);
	
	for(n=1; i>=n;++n){
		printf("\n");
		printf("Input nama mahasiswa %d : ",n);
		scanf("%s", &nama[n]);
	}
	for(n=1; i>=n;++n){
		printf("\nNama mahasiswa %d : %s ",n,&nama[n]);
	}
	
	return 0;
}
