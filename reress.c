#include <stdio.h>

int main() {
    float saldoAwal, bungaPersen, totalSaldo, bunga;

    //input 
    printf("=== Kalkulator Bunga Tabungan ===\n");
    printf("Masukkan saldo awal (Rp): ");
    scanf("%f", &saldoAwal);

    printf("Masukkan persentase bunga bulanan (%%): ");
    scanf("%f", &bungaPersen);

    //proses
    bunga = saldoAwal * (bungaPersen / 100);
    totalSaldo = saldoAwal + bunga;

    //output 
    printf("\nBunga bulan ini: Rp%.2f\n", bunga);
    printf("Total saldo setelah bunga: Rp%.2f\n", totalSaldo);

    return 0;
}