//created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file untuk ditulis
	fptr = fopen("puisi4.txt", "w");
	
	for(int i = 0; i < 5; i++){
		
		//mengambil input dari user
		printf(" isi baris ke-%d : ", i);
		fgets(text, sizeof(text), stdin);
		
		//menulis ke text ke file
		fputs(text, fptr);
	}
	
	printf("file berhasil ditulis\n");
	
	//tutup file setelah ditulis
	fclose(fptr);
	
	//buka kembali file untuk dibaca
	fptr = fopen("puisi4.txt", "r");
	
	//baca isi file dengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("isi filenya sekarang : %s", buff);
	}
	
	//tutup file
	fclose(fptr);
}