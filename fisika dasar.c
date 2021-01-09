#include <stdlib.h>
#include <stdio.h>

void kecepatan()
{
 int s, v, t;

 printf("\nMenghitung Kecepatan\n");
 printf("Masukkan waktu (jam): ");
 scanf_s("%d", &t);
 printf("Masukkan jarak (km): ");
 scanf_s("%d", &s);

 v = s/t;
 printf("\nKecepatan = jarak / waktu\n");
 printf("Kecepatan = %d km/jam\n", v);
}

void jarak()
{
 int s, v, t;

 printf("\nMenghitung Jarak\n");
 printf("Masukkan waktu (jam): ");
 scanf_s("%d", &t);
 printf("Masukkan kecepatan (km/jam): ");
 scanf_s("%d", &v);

 s = v*t;
 printf("\nJarak = kecepatan x waktu\n");
 printf("Jarak = %d km\n", s);
}

void waktu()
{
 int s, v, t;

 printf("\nMenghitung Waktu\n");
 printf("Masukkan kecepatan (km/jam): ");
 scanf_s("%d", &v);
 printf("Masukkan jarak (km): ");
 scanf_s("%d", &s);

 t = s/v;
 printf("\nWaktu = jarak / kecepatan\n");
 printf("Waktu = %d jam\n", t);
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
 printf("|             RUMUS GERAK LURUS BERATURAN           |\n");
 printf("=====================================================\n");
 printf("| 1. Hitung Kecepatan                               |\n");
 printf("| 2. Hitung Jarak                                   |\n");
 printf("| 3. Hitung Waktu                                   |\n");
 printf("| 4. Keluar                                         |\n");
 printf("=====================================================\n");
 printf("Pilihan Anda : ");
 scanf_s("%i", &pilih);

 switch(pilih)
 {
 case 1: kecepatan();
  break;
 case 2: jarak();
  break;
 case 3: waktu();
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
printf("\n\nSOAL LATIHAN PERHITUNGAN GERAK LURUS BERATURAN\n\n");
    //nomor 1//
    printf("1.)  Sebuah mobil bergerak pada lintasan lurus dengan kecepatan tetap 72 km/jam.\n     Jarak yang ditempuh mobil setelah melaju 20 menit adalah...");
    printf("\n     a.) 3.6 km");
    printf("\n     b.) 7.2 km");
    printf("\n     c.) 24 km");
    printf("\n     d.) 216 km");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='c')
        {printf("Benar, jawabannya adalah 24 km.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  Sebuah mobil bergerak lurus beraturan dan menempuh 3 km dalam waktu 2 menit.");
    printf("\n     Berapa lama waktu yang dibutuhkan mobil untuk menempuh jarak 75 km?");
    printf("\n     a.) 250 detik");
    printf("\n     b.) 200 detik");
    printf("\n     c.) 2500 detik");
    printf("\n     d.) 3000 detik");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 3000 detik.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  Seorang pembalap sepeda bergerak pada lintasan lurus dengan kecepatan tetap 20 m/s.");
    printf("\n      Maka waktu yang digunakan pembalap tersebut bergerak setelah menempuh jarak 20 km adalah...");
    printf("\n     a.) 10.000 detik");
    printf("\n     b.) 1.000 detik");
    printf("\n     c.) 100 detik");
    printf("\n     d.) 20 menit");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 1.000 detik.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Seekor cheetah berlari pada lintasan lurus dengan kecepatan 120 km/jam selama 15 detik.");
    printf("\n      Maka jarak lintasan yang ditempuh oleh cheetah tersebut adalah...");
    printf("\n     a.) 500 m");
    printf("\n     b.) 1.000 m");
    printf("\n     c.) 1.500 m");
    printf("\n     d.) 12 km");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 500 m.");}
    else
    {printf("Salah, silahkan pelajari materi lagi.");nilai+=20;}
    //nomor 5//
    printf("\n\n5.)  Ibu pergi ke pasar naik sepeda motor. Jarak pasar dengan rumah adalah 15 km.");
    printf("\n      Agar Ibu sampai di pasar dalam waktu 20 menit, maka kecepatan motor yang dipakai adalah...");
    printf("\n     a.) 40 km/jam");
    printf("\n     b.) 45 km/jam");
    printf("\n     c.) 50 km/jam");
    printf("\n     d.) 55 km/jam");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 45 km/jam.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}

    //link video
    printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=VopAwVdc_xk /n");
