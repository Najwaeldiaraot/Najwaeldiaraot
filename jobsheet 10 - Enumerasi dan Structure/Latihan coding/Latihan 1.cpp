//created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main() {
	enum hari sekarang;
	sekarang = RABU;
	printf("Sekarang hari ke-%d", sekarang + 1);
}