/*
 * ================================================
 *   uangjajan.c — Fungsi 4: Kalkulator Sisa Uang Jajan
 *   Dikerjakan oleh: Anggota 4
 * ================================================
 *
 *  Input  : Uang saku hari ini, estimasi pengeluaran hari ini
 *  Output : Sisa uang saku setelah dikurangi pengeluaran
 */

#include <stdio.h>

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



