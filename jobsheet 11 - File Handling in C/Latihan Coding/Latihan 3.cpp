//created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>
#include <stdlib.h>

int main(){
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if((fptr = fopen("puisi.txt","r")) == NULL){
		printf("error : file tidak ada !");
		//Tutup program karena file gak ada.
		exit(1);
	}
	
	// baca isi file dengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("%s", buff);
	}
	
	//tutup file
	fclose(fptr);
}