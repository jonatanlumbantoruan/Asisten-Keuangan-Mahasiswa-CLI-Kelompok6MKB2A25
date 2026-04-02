
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

/*
 * ================================================
 *   uangjajan.c — Fungsi 4: Kalkulator Sisa Uang Jajan
 *   Dikerjakan oleh: Anggota 4
 * ================================================
 *
 *  Input  : Uang saku hari ini, estimasi pengeluaran hari ini
 *  Output : Sisa uang saku setelah dikurangi pengeluaran
 */
/*
 * ================================================
 *   tabungan.c — Fungsi 3: Kalkulator Bunga Tabungan
 *   Dikerjakan oleh: Anggota 3
 * ================================================
 *
 *  Input  : Saldo awal, persentase bunga bulanan
 *  Output : Total uang setelah ditambah bunga
 */

void kalkulator_tabungan() {
    double saldo_awal, persen_bunga;
    double nominal_bunga, saldo_akhir;

    printf("  🏦  KALKULATOR BUNGA TABUNGAN SEDERHANA\n");
    printf("  -----------------------------------------\n\n");

    /* Input saldo awal */
    printf("  Masukkan saldo awal (Rp)         : ");
    scanf("%lf", &saldo_awal);

    /* Validasi: saldo tidak boleh negatif */
    if (saldo_awal < 0) {
        printf("\n  ⚠️  Saldo tidak boleh negatif!\n");
        return;
    }

    /* Input persentase bunga bulanan */
    printf("  Masukkan bunga bulanan (%%)        : ");
    scanf("%lf", &persen_bunga);

    /* Validasi: bunga tidak boleh negatif */
    if (persen_bunga < 0) {
        printf("\n  ⚠️  Persentase bunga tidak boleh negatif!\n");
        return;
    }

    /* Perhitungan bunga sederhana (1 bulan) */
    nominal_bunga = saldo_awal * (persen_bunga / 100.0);
    saldo_akhir   = saldo_awal + nominal_bunga;

    /* Output hasil */
    printf("\n  ┌──────────────────────────────────────┐\n");
    printf("  │           HASIL PERHITUNGAN          │\n");
    printf("  ├──────────────────────────────────────┤\n");
    printf("  │  Saldo Awal      : Rp %12.2f   │\n", saldo_awal);
    printf("  │  Bunga %.2f%%/bln : Rp %12.2f   │\n", persen_bunga, nominal_bunga);
    printf("  ├──────────────────────────────────────┤\n");
    printf("  │  💰 Saldo Akhir  : Rp %12.2f   │\n", saldo_akhir);
    printf("  └──────────────────────────────────────┘\n");

    /* Pesan motivasi menabung */
    if (saldo_awal == 0) {
        printf("\n  😬 Saldo nol bung... Yuk mulai nabung!\n");
    } else if (saldo_awal >= 1000000) {
        printf("\n  🌟 Keren! Rajin nabung nih, terus pertahankan!\n");
    } else {
        printf("\n  💪 Mantap! Konsisten nabung ya biar makin gede!\n");
    }
}


void kalkulator_uangjajan() {
    double uang_saku, total_pengeluaran, sisa_uang;

    printf("  💸  KALKULATOR SISA UANG JAJAN HARIAN\n");
    printf("  ----------------------------------------\n\n");

    /* Input uang saku hari ini */
    printf("  Masukkan uang saku hari ini (Rp)      : ");
    scanf("%lf", &uang_saku);

    /* Validasi: uang saku tidak boleh negatif */
    if (uang_saku < 0) {
        printf("\n  ⚠️  Uang saku tidak boleh negatif!\n");
        return;
    }

    /* Input estimasi pengeluaran */
    printf("  Masukkan estimasi pengeluaran (Rp)    : ");
    scanf("%lf", &total_pengeluaran);

    /* Validasi: pengeluaran tidak boleh negatif */
    if (total_pengeluaran < 0) {
        printf("\n  ⚠️  Pengeluaran tidak boleh negatif!\n");
        return;
    }

    /* Perhitungan sisa */
    sisa_uang = uang_saku - total_pengeluaran;

    /* Output hasil */
    printf("\n  ┌──────────────────────────────────────┐\n");
    printf("  │           HASIL PERHITUNGAN          │\n");
    printf("  ├──────────────────────────────────────┤\n");
    printf("  │  Uang Saku       : Rp %12.2f   │\n", uang_saku);
    printf("  │  Total Pengeluaran: Rp %12.2f   │\n", total_pengeluaran);
    printf("  ├──────────────────────────────────────┤\n");

    if (sisa_uang >= 0) {
        printf("  │  ✅ Sisa Uang    : Rp %12.2f   │\n", sisa_uang);
        printf("  └──────────────────────────────────────┘\n");
    } else {
        printf("  │  ❌ Kekurangan  : Rp %12.2f   │\n", -sisa_uang);
        printf("  └──────────────────────────────────────┘\n");
    }

    /* Pesan sesuai kondisi keuangan */
    if (sisa_uang > uang_saku * 0.5) {
        printf("\n  🎉 Keren! Lebih dari setengah uangmu aman!\n");
    } else if (sisa_uang > 0) {
        printf("\n  😊 Pas-pasan tapi cukup. Jaga pengeluaran ya!\n");
    } else if (sisa_uang == 0) {
        printf("\n  😅 Habis tepat! Akurasi 100%% nih estimasinya.\n");
    } else {
        printf("\n  😱 Wah, pengeluaran melebihi budget!\n");
        printf("     Pertimbangkan kurangi pengeluaran hari ini.\n");
    }
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


