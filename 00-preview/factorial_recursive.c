#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int factorial(int n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}


int main(){

    clock_t start, end;
    double time_taken;
    start = clock();

    printf("Hasil dari factorial-nya adalah %d", factorial(10000000));

    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nWaktu yang dibutuhkan untuk menjalankan bubble sort adalah %f detik\n", time_taken);

}