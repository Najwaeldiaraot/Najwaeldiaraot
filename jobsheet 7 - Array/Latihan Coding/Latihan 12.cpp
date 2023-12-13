//created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>
#include <string.h>
void main (){
    char str1 [] = "Agariadne";
	char str2 [] = "Agariadne";
	int hasil;
	
	// membandingkan string
	hasil = strcmp (str1, str2);
	
	if (hasil == 0) {
	printf ("str1 dan str2 sama");
	} else {
	printf ("str1 dan str2 berbeda");
    }
}