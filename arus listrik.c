#include <stdlib.h>
#include <stdio.h>

void kuatarus(){
int v, i, r;

printf("\nMenghitung Kuat Arus Listrik\n");
printf("Masukkan beda potensial listik (V): ");
 scanf_s("%d", &v);
 printf("Masukkan hambatan listrik (ohm): ");
 scanf_s("%d", &r);

 i = v/r;
 printf("\nKuat Arus = beda potensial/hambatan\n");
 printf("Kuat Arus = %d A\n", i);
}

void bedapotensial()
{
 int v, i, r;

 printf("\nMenghitung Beda Potensial Listrik\n");
 printf("Masukkan kuat arus listrik (A): ");
 scanf_s("%d", &i);
 printf("Masukkan hambatan listrik (ohm): ");
 scanf_s("%d", &r);

 v = i*r;
 printf("\nBeda potensial = kuat arus x hambatan\n");
 printf("Beda potensial = %d V\n", v);
}

void hambatan()
{
 int v, i, r;

 printf("\nMenghitung Hambatan Listrik\n");
 printf("Masukkan beda potensial listik (V): ");
 scanf_s("%d", &v);
 printf("Masukkan kuat arus listrik (A): ");
 scanf_s("%d", &i);

 r = v/i;
 printf("\nHambatan = beda potensial / kuat arus\n");
 printf("Hambatan = %d ohm\n", r);
}

void keluar()
{
printf("Terimakasih \n");
}

int main(){
 int pilih;
 char ulang;
 do
 {
 printf("=====================================================\n");
 printf("|                   RUMUS HUKUM OHM                 |\n");
 printf("=====================================================\n");
 printf("| 1. Hitung Kuat Arus Listrik                       |\n");
 printf("| 2. Hitung Beda Potensial Listrik                  |\n");
 printf("| 3. Hitung Hambatan Listrik                        |\n");
 printf("| 4. Keluar                                         |\n");
 printf("=====================================================\n");
 printf("Pilihan Anda : ");
 scanf_s("%i", &pilih);

 switch(pilih)
 {
 case 1: kuatarus();
  break;
 case 2: bedapotensial();
  break;
 case 3: hambatan();
  break;
 case 4: keluar();
 default: printf("Pilihan Anda Tidak Tersedia\n\n");
 }
printf("\n");
printf("=====================================================\n");
printf("Kembali ke Menu Utama ? (Y/N) : ");
scanf(" %c", &ulang);
printf("=====================================================\n");
}
while(ulang == 'y' ||ulang == 'Y');
}

// Latihan Soal
printf("\n\nSOAL LATIHAN PERHITUNGAN HUKUM OHM\n\n");
    //nomor 1//
    printf("1.)  Arus listrik 2 A mengalir melalui sebuah kawat penghantar dengan beda potensial di kedua ujungnya");
    printf("\n     adalah 12 V. Hambatan pada kawat tersebut adalah...");
    printf("\n     a.) 6 ohm");
    printf("\n     b.) 8 ohm");
    printf("\n     c.) 12 ohm");
    printf("\n     d.) 18 ohm");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 6 ohm.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  Suatu pemanas listrik memiliki beda potensial 40 V dan kuat arus 4 A. Hitunglah hambatan pemanas tersebut?");
    printf("\n     a.) 1.000 ohm");
    printf("\n     b.) 100 ohm");
    printf("\n     c.) 10 ohm");
    printf("\n     d.) 1 ohm");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='c')
        {printf("Benar, jawabannya adalah 10 ohm.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  Sebuah kawat dihubungkan ke baterai dengan tegangan sebesar 5 V dan");
    printf("\n     resistensinya adalah 2 ohm. Hitunglah kuat arus listrik yang mengalir dalam kawat");
    printf("\n     tersebut?");
    printf("\n     a.) 2.5 A");
    printf("\n     b.) 5 A");
    printf("\n     c.) 7.5 A");
    printf("\n     d.) 10 A");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 2.5 A.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Suatu hambatan 15 ohm dihubungkan dengan baterai. Kuat arus yang mengalir adalah");
    printf("\n     2/3 A. Hitung nilai tegangan pada baterai tersebut!");
    printf("\n     a.) 5 V");
    printf("\n     b.) 10 V");
    printf("\n     c.) 15 V");
    printf("\n     d.) 20 V");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 10 V.");}
    else
    {printf("Salah, silahkan pelajari materi lagi.");nilai+=20;}
    //nomor 5//
    printf("\n\n5.)  Suatu hambatan 14 ohm dirangkai dengan baterai yang memiliki tegangan 8 Volt. Hitung");
    printf("\n     besar kuat arus listrik yang mengalir pada hambatan!");
    printf("\n     a.) 6/7 A");
    printf("\n     b.) 7/7 A");
    printf("\n     c.) 3/7 A");
    printf("\n     d.) 9/7 A");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 6/7 A.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}

    //link video
    printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=qnnMOuEGLYI /n");
