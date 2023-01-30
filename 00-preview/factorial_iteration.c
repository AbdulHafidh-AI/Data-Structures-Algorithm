#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){   



    int jumlah = 0;
    clock_t start, end;
    double time_taken;
    start = clock();

    for(int i = 0; i < 10000000; i++){
        jumlah += i;
    }


    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nWaktu yang dibutuhkan untuk menjalankan program ini adalah %f detik\n", time_taken);

}