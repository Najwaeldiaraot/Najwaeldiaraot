// Created by 23343079_Najwa Eldiara Owilia Tiksa

#include <stdio.h>
char name[30];
int main(){
	printf ("Hello, siapa nama lengkapmu?\n");
	scanf("%30[^\n]", &name);
	
	printf ("Selamat Datang %s Dalam Pemrograman C!\n", name );
	return 0;
}