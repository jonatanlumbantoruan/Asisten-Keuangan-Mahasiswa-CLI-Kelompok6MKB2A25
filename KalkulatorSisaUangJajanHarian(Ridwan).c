// 4. FItur Mengetahui Sisa Uang Saku

void laporanKeuangan(int pemasukan, int pengeluaran) {
    int saldo = pemasukan - pengeluaran;

    printf("\n===== LAPORAN KEUANGAN =====\n");
    printf("Total Pemasukan  : %d\n", pemasukan);
    printf("Total Pengeluaran: %d\n", pengeluaran);
    printf("Sisa Saldo       : %d\n", saldo);

    if (saldo > 0) {
        printf("Status: Aman \n");
    } else if (saldo == 0) {
        printf("Status: Pas-pasan \n");
    } else {
        printf("Status: Minus \n");
    }
}
