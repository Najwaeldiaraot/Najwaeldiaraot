#include <stdio.h>

//create by 23343079_Najwa Eldiara Owilia Tiksa

int main() {
	
	//deklarasi
    double nilaiPresensi, nilaiPraktek, nilaiUts, nilaiUas;
    double nilaiAkhir;

	//user memasukkan nilai
    printf("Masukkan Nilai Presensi (0-100): ");
    scanf("%lf", &nilaiPresensi);

    printf("Masukkan Nilai Praktek (0-100): ");
    scanf("%lf", &nilaiPraktek);

    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%lf", &nilaiUts);

    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%lf", &nilaiUas);

    // Menghitung nilai akhir berdasarkan bobot
    nilaiAkhir = (0.20 * nilaiPresensi) + (0.20 * nilaiPraktek) + (0.25 * nilaiUts) + (0.35 * nilaiUas);

    // Menentukan kategori nilai
    char kategori;
    if (nilaiAkhir >= 91 && nilaiAkhir <= 100) {
        kategori = 'A';
    } else if (nilaiAkhir >= 86 && nilaiAkhir <= 90) {
        kategori = 'A'; //A-
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilaiAkhir >= 81 && nilaiAkhir <= 85) {
        kategori = 'B'; //B+
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilaiAkhir >= 76 && nilaiAkhir <= 80) {
        kategori = 'B';
    } else if (nilaiAkhir >= 66 && nilaiAkhir <= 75) {
        kategori = 'B'; //B-
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir >= 56 && nilaiAkhir <= 65) {
        kategori = 'C';
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilaiAkhir >= 45 && nilaiAkhir <= 55) {
        kategori = 'D';
        printf("Maaf, anda tidak lulus!\n");
    } else {
        kategori = 'E';
    }

	//menampilkan nilai 
    printf("Nilai Akhir: %.2lf\n", nilaiAkhir);
    printf("Kategori: %c\n", kategori);

    return 0;
}
