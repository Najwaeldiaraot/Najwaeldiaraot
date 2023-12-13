//created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

int main(){
	//membuat array kosong
	int nilai[5] = {33, 22, 11, 44, 21};
	
	//mengambil banyaknya isi array
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d\n", length);
}