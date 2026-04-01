#include <stdio.h>


void splitBill() {
    float totalTagihan, perOrang;
    int jumlahOrang;

    printf("\n=== KALKULATOR SPLIT BILL ===\n");

    // Input
    printf("Masukkan total tagihan: ");
    scanf("%f", &totalTagihan);

    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlahOrang);

    // Validasi
    if (jumlahOrang <= 0) {
        printf("Jumlah orang tidak valid!\n");
        return;
    }

    // Proses
    perOrang = totalTagihan / jumlahOrang;

    // Output
    printf("\nSetiap orang harus membayar: Rp %.2f\n", perOrang);
}

// ==============================
// MAIN MENU (SIMPLE)
// ==============================
int main() {
    int pilihan;

    do {
        printf("\n=== ASISTEN KEUANGAN MAHASISWA CLI ===\n");
        printf("1. Kalkulator Diskon\n");
        printf("2. Split Bill (Patungan)\n");
        printf("3. Bunga Tabungan\n");
        printf("4. Sisa Uang Harian\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 2:
                splitBill(); // fungsi kamu dipanggil di sini
                break;
            case 1:
            case 3:
            case 4:
                printf("Fitur belum tersedia (dikerjakan anggota lain)\n");
                break;
            case 0:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }

    } while (pilihan != 0);

    return 0;
}
