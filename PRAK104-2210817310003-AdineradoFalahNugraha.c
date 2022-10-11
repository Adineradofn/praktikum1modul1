#include <stdio.h>
int main (){
int a = 400000;
int b = 350000;
int hasil;
int hasill;

printf("Harga sepatu a adalah %d\n\n", a);
printf("Harga sepatu b adalah %d\n\n", b);
hasil = a - (a * 13 / 100); 
hasill = b - (b * 21 / 100);

// Mau nulis 13% sama 21% tapi error (:
printf("Sepatu A mendapat diskon 13 persen sehingga harganya menjadi %d\n", hasil);
printf ("Sepatu B mendapat diskon 21 persen sehingga harganya menjadi %d", hasill);
}