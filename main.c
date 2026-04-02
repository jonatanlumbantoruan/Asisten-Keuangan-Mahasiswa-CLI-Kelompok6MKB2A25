
/*
 * ================================================
 *   ASISTEN KEUANGAN MAHASISWA CLI
 *   Proyek Kolaborasi Tim
 * ================================================
 *
 *  Struktur Kontribusi:
 *  - Ketua (Jonatan)       : main.c (Menu Utama, UI, Git Merge)
 *  - Anggota 1 (Ariq)      : diskon.c  (Fungsi 1 - Kalkulator Diskon)
 *  - Anggota 2 (Naufal)    : splitbill.c (Fungsi 2 - Split Bill)
 *  - Anggota 3 (Resthya)   : tabungan.c (Fungsi 3 - Bunga Tabungan)
 *  - Anggota 4 (Ridwan)    : uangjajan.c (Fungsi 4 - Sisa Uang Jajan)
 */

#include <stdio.h>
#include <stdlib.h>

/*Deklarasi fungsi dari file lain*/
void kalkulator_diskon();
void kalkulator_splitbill();
void kalkulator_tabungan();
void kalkulator_uangjajan();

/*Fungsi utilitas UI*/
void cetak_header() {
    printf("\n");
    printf("  ╔══════════════════════════════════════╗\n");
    printf("  ║     ASISTEN KEUANGAN MAHASISWA       ║\n");
    printf("  ║         💰  Atur Duit, Bro!  💰      ║\n");
    printf("  ╚══════════════════════════════════════╝\n");
    printf("\n");
}

void cetak_menu() {
    printf("  ┌──────────────────────────────────────┐\n");
    printf("  │           📋  MENU UTAMA             │\n");
    printf("  ├──────────────────────────────────────┤\n");
    printf("  │  1. 🏷️  Kalkulator Diskon Belanja    │\n");
    printf("  │  2. 🍽️  Kalkulator Split Bill        │\n");
    printf("  │  3. 🏦  Kalkulator Bunga Tabungan    │\n");
    printf("  │  4. 💸  Kalkulator Sisa Uang Jajan   │\n");
    printf("  │  0. 🚪  Keluar                       │\n");
    printf("  └──────────────────────────────────────┘\n");
    printf("\n");
    printf("  Pilih menu [0-4]: ");
}

void cetak_garis_pemisah() {
    printf("\n  ----------------------------------------\n\n");
}

void tekan_enter_lanjut() {
    printf("\n  Tekan [Enter] untuk kembali ke menu...");
    /* Bersihkan buffer lalu tunggu Enter */
    while (getchar() != '\n');
    getchar();
}

/*Program Utama*/
int main() {
    int pilihan;

    cetak_header();

    do {
        cetak_menu();
        scanf("%d", &pilihan);

        cetak_garis_pemisah();

        switch (pilihan) {
            case 1:
                kalkulator_diskon();
                tekan_enter_lanjut();
                break;
            case 2:
                kalkulator_splitbill();
                tekan_enter_lanjut();
                break;
            case 3:
                kalkulator_tabungan();
                tekan_enter_lanjut();
                break;
            case 4:
                kalkulator_uangjajan();
                tekan_enter_lanjut();
                break;
            case 0:
                printf("  👋 Sampai jumpa! Semangat ngatur keuangannya!\n\n");
                break;
            default:
                printf("  ⚠️  Pilihan tidak valid! Masukkan angka 0-4.\n");
                tekan_enter_lanjut();
                break;
        }

        if (pilihan != 0) {
            cetak_garis_pemisah();
        }

    } while (pilihan != 0);

    return 0;
}


