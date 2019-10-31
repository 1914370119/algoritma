#include <stdio.h>

int main()
{
  int a,b,penjumlahan,pengurangan,perkalian,pembagian,modulus,bil1,bil2,hasil;
  printf("Program Operasi Aritmatika\n");
  a = 100;
  b = 40;
  penjumlahan = a + b;
  pengurangan = a - b;
  perkalian = a * b;
  pembagian = a / b;
  modulus = a % b;

  printf("hasil dari penjumlahan %d + %d = %d\n" , a ,b,penjumlahan);
  printf("hasil dari pengurangan %d - %d = %d\n" , a ,b,pengurangan);
  printf("hasil dari perkalian  %d * %d  = %d\n" , a ,b,perkalian);
  printf("hasil dari pembagian  %d / %d  = %d\n" , a ,b,pembagian);
  printf ("hasil dari modulus\n ",modulus);
  modulus =a%b;
  printf ("nilai modulus   adalah %d\n",modulus);
  modulus=a++;
  return 0 ;
 }
