#include <stdlib.h>
#include <stdio.h>

void debit(){
int d, v, w;

printf("\nMenghitung Debit\n");
printf("Masukkan volume (liter/dm3): ");
 scanf_s("%d", &v);
 printf("Masukkan waktu (menit): ");
 scanf_s("%d", &w);

 d = v/w;
 printf("\nDebit = Volume / Waktu\n");
 printf("Debit = %d liter/menit\n", d);
}

void volume()
{
 int d, v, w;

 printf("\nMenghitung Volume\n");
 printf("Masukkan debit (liter/menit): ");
 scanf_s("%d", &d);
 printf("Masukkan waktu (menit): ");
 scanf_s("%d", &w);

 v = d*w;
 printf("\nVolume = debit x waktu\n");
 printf("Volume = %d liter/dm3\n", v);
}

void waktu()
{
 int d, v, w;

 printf("\nMenghitung Waktu\n");
 printf("Masukkan volume (liter/dm3): ");
 scanf_s("%d", &v);
 printf("Masukkan debit (liter/menit): ");
 scanf_s("%d", &d);

 w = v/d;
 printf("\nWaktu = volume / debit\n");
 printf("Waktu = %d menit\n", w);
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
 printf("|             RUMUS DEBIT, VOLUME, DAN WAKTU        |\n");
 printf("=====================================================\n");
 printf("| 1. Hitung Debit                                   |\n");
 printf("| 2. Hitung Volume                                  |\n");
 printf("| 3. Hitung Waktu                                   |\n");
 printf("| 4. Keluar                                         |\n");
 printf("=====================================================\n");
 printf("Pilihan Anda : ");
 scanf_s("%i", &pilih);

 switch(pilih)
 {
 case 1: debit();
  break;
 case 2: volume();
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
printf("\n\nSOAL LATIHAN PERHITUNGAN DEBIT, VOLUME, DAN WAKTU\n\n");
    //nomor 1//
    printf("1.)  Volume bak mandi di rumah Ani dapat menampung air sebanyak 120 liter.");
    printf("\n     Waktu yang diperlukan untuk mengisi bak mandi dalam keadaan kosong sampai penuh adalah 30 menit.");
    printf("\n     Debit air yang mengalir mengisi bak mandi di rumah Ani adalah...");
    printf("\n     a.) 80 liter/menit");
    printf("\n     b.) 65 liter/menit");
    printf("\n     c.) 55 liter/menit");
    printf("\n     d.) 40 liter/menit");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 40 liter/menit.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  Volume sebuah kolam renang dapat menampung sebanyak 7,2 m3 air. Kolam tersebut diisi air dengan");
    printf("\n     debit air yang mengalir sebesar 24 liter/detik. Waktu yang diperlukan untuk mengisi kolam tersebut");
    printf("\n     sampai penuh adalah...");
    printf("\n     a.) 15 menit");
    printf("\n     b.) 10 menit");
    printf("\n     c.) 7.5 menit");
    printf("\n     d.) 5 menit");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 5 menit.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  Sebuah minyak ditampung dalam sebuah tangki. Waktu yang diperlukan untuk mengeluarkan semua isi");
    printf("\n     minyak dari dalam tangki adalah 2 menit. Jika debit minyak yang keluar dari tangki adalah 3 dm3/detik");
    printf("\n     maka jumlah minyak yang terdapat dalam tangki tersebut adalah...");
    printf("\n     a.) 720 liter");
    printf("\n     b.) 360 liter");
    printf("\n     c.) 120 liter");
    printf("\n     d.) 60 liter");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 360 liter.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Seorang petugas pom bensin sedang mengisikan bensin ke tangki sebuah mobil.");
    printf("\n     Sebanyak 36 liter bensin diisikan dalam waktu 2 menit. Berapa liter/menit debit aliran bensin tersebut ?");
    printf("\n     a.) 18 liter/menit");
    printf("\n     b.) 16 liter/menit");
    printf("\n     c.) 12 liter/menit");
    printf("\n     d.) 10 liter/menit");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 18 liter/menit.");}
    else
    {printf("Salah, silahkan pelajari materi lagi.");nilai+=20;}
    //nomor 5//
    printf("\n\n5.)  Jika debit air 10 m3 /menit, maka untuk memenuhi kolam 160.000 liter.");
    printf("\n     Berapa menit waktu yang diperlukan untuk memenuhi kolam tersebut ?");
    printf("\n     a.) 18 menit");
    printf("\n     b.) 16 menit");
    printf("\n     c.) 12 menit");
    printf("\n     d.) 10 menit");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 16 menit.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}

    //link video
    printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=AN8ykKnjciI /n");
