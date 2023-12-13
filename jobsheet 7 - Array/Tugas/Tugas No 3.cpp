//Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>
#include <string.h>

main(){
	char input[10];
	int kesalahan;
	char pw [10]= "abc456";
	char user[35];
	
	printf("\nPROGRAM HALAMAN LOGIN");
	printf("\n\n");
	
	for (kesalahan = 3; kesalahan>0; kesalahan--)
	{
		printf("Masukan Username : ");
		scanf("%s", &user);
		printf("Masukan Password : ");
		scanf("%s", &input);
		
		if(strcmp(input,pw) == 0) {
		printf("\nberhasil login\n");
		break; }
		else if (kesalahan == 1) {
			printf("\npassword anda salah \n");
			break; }
			
			else {
				printf("\npassword anda salah \n", kesalahan-1);
			}
		
		}
	}
