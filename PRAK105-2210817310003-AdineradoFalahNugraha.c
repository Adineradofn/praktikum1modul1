#include <stdio.h>
int main(){
int a = 9;
int b = 5;
int x = 8;
int y = 8;
int hasil;

printf("Variabel a bernilai %d\n\n", a);
printf("Variabel b bernilai %d\n\n", b);
printf("Variabel x bernilai %d\n\n", x);
printf("Variabel y bernilai %d\n\n",y);

hasil = a % b % x % y;
printf("Hasil dari a dibagi b dan x dibagi y adalah %d", hasil);
}