//Created by 23343079_Najwa Eldiara Owilia Tiksa
#include <stdio.h>

float saldo = 10000; // Saldo awal

// Fungsi untuk menampilkan menu ATM
void tampilkanMenu() {
    
    printf("\n  +--------------------------------------------+\n");
    printf("  |                ATM SEDERHANA               |\n");
    printf("  +--------------------------------------------+\n");
    printf("  | 1. Cek Saldo                               |\n");
    printf("  | 2. Penarikan  Tunai                        |\n");
    printf("  | 3. Setoran                                 |\n");
    printf("  | 4. Exit                                    |\n");
    printf("  +--------------------------------------------+\n");
    
}

// Fungsi untuk cek saldo
void cekSaldo() {
    printf("\nSaldo Anda: %.2f\n", saldo);
}

// Fungsi untuk melakukan penarikan
void penarikan() {
    float jumlah;
    printf("\nMasukkan jumlah penarikan: ");
    scanf("%f", &jumlah);

    if (jumlah > saldo) {
        printf("Maaf, saldo tidak mencukupi.\n");
    } else {
        saldo -= jumlah;
        printf("Penarikan berhasil. Saldo Anda sekarang: %.2f\n", saldo);
    }
}

// Fungsi untuk melakukan setoran
void setoran() {
    float jumlah;
    printf("\nMasukkan jumlah setoran: ");
    scanf("%f", &jumlah);

    saldo += jumlah;
    printf("Setoran berhasil. Saldo Anda sekarang: %.2f\n", saldo);
}

int main() {
    int pilihan;

    do {
        tampilkanMenu();

        printf("  Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                cekSaldo();
                break;
            case 2:
                penarikan();
                break;
            case 3:
                setoran();
                break;
            case 4:
                printf("\nTerima kasih. Sampai jumpa!\n");
                break;
            default:
                printf("\nPilihan tidak valid. Silakan coba lagi.\n");
        }

    } while (pilihan != 4);

    return 0;
}
