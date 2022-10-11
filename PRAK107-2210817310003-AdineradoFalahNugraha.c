#include <stdio.h>
int main(){
int a = 4;
int b = 5 ;
int c = 7;
int hasil;

printf("diketahui :\n\n");
printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n\n");
printf("Keliling Tanah Pak Dengklek adalah 16\n\n");
printf("Harga tanah Per Meter adalah 85000\n\n");
printf("Jawaban : \n\n");

hasil = (a * 85000) + (b * 85000) + (c * 85000);
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", hasil);
}