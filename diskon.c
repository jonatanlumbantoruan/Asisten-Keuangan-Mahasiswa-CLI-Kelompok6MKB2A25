/*
 * ========================================================
 *   diskon.c — Fungsi 1: Kalkulator Diskon Belanja
 *   Dikerjakan oleh: Muhammad Ariq Naufal Hakim (2510485)
 * ========================================================
 * ========================================================
 *  Input  : Harga awal barang, persentase diskon
 *  Output : Harga akhir setelah diskon + nominal potongan
 *  =======================================================
 */

#include <stdio.h>

void kalkulator_diskon() {
    double harga_awal, persen_diskon;
    double potongan, harga_akhir;

    printf("  🏷️  KALKULATOR DISKON BELANJA\n");
    printf("  --------------------------------\n\n");

    /* Input harga awal */
    printf("  Masukkan harga awal barang (Rp): ");
    scanf("%lf", &harga_awal);

    /* Validasi: harga tidak boleh negatif */
    if (harga_awal < 0) {
        printf("\n  ⚠️  Harga tidak boleh negatif!\n");
        return;
    }

    /* Input persentase diskon */
    printf("  Masukkan persentase diskon (%%)  : ");
    scanf("%lf", &persen_diskon);

    /* Validasi: diskon harus antara 0 - 100 */
    if (persen_diskon < 0 || persen_diskon > 100) {
        printf("\n  ⚠️  Persentase diskon harus antara 0 dan 100!\n");
        return;
    }

    /* Perhitungan */
    potongan    = harga_awal * (persen_diskon / 100.0);
    harga_akhir = harga_awal - potongan;

    /* Output hasil */
    printf("\n  ┌─────────────────────────────────┐\n");
    printf("  │         HASIL PERHITUNGAN       │\n");
    printf("  ├─────────────────────────────────┤\n");
    printf("  │  Harga Awal   : Rp %12.2f  │\n", harga_awal);
    printf("  │  Diskon %.1f%%  : Rp %12.2f  │\n", persen_diskon, potongan);
    printf("  ├─────────────────────────────────┤\n");
    printf("  │  💰 Harga Bayar: Rp %12.2f  │\n", harga_akhir);
    printf("  └─────────────────────────────────┘\n");

    /* Pesan tambahan jika diskon besar */
    if (persen_diskon >= 50) {
        printf("\n  🎉 Wow, diskon gede banget! Mantap!\n");
    } else if (persen_diskon >= 20) {
        printf("\n  😊 Lumayan nih diskonnya!\n");
    }
}
