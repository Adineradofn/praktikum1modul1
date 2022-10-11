#include <stdio.h>
int main(){
int alas = 5;
int tinggi = 12;
int luas;
int keliling;
int hasil;
int hasill;

printf("Diketahui:\n\n");
printf("Alas = %d cm\n\n", alas);
printf("Tinggi = %d cm\n\n\n\n", tinggi);

hasil = (alas * alas) + (tinggi * tinggi);
hasill = sqrt(hasil);
printf("Jawab :\n\n");
printf("Sisi A = %d cm\n\n", tinggi);
printf("Sisi B = %d cm\n\n", hasill );
printf("Sisi c = %d cm\n\n", alas);

keliling = alas + tinggi + hasill;
printf("keliling = %d cm\n\n", keliling);

luas = alas * tinggi / 2;
printf("luas = %d cm", luas);
}