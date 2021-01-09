#include <stdlib.h>
#include <stdio.h>

void massajenis(){
int m, v, p;

printf("\nMenghitung Massa Jenis Benda\n");
printf("Masukkan massa benda (kg): ");
 scanf_s("%d", &m);
 printf("Masukkan volume (m3): ");
 scanf_s("%d", &v);

 p = m/v;
 printf("\nMassa jenis = massa benda / volume\n");
 printf("Massa jenis = %d kg/m3\n", p);
}

void massabenda()
{
 int m, v, p;

 printf("\nMenghitung Massa Benda\n");
 printf("Masukkan massa jenis (kg/m3): ");
 scanf_s("%d", &p);
 printf("Masukkan volume (m3): ");
 scanf_s("%d", &v);

 m = p*v;
 printf("\nMassa benda = massa jenis x volume\n");
 printf("Massa benda = %d kg\n", m);
}

void volume()
{
 int m, v, p;

 printf("\nMenghitung Volume\n");
 printf("Masukkan massa benda (kg): ");
 scanf_s("%d", &m);
 printf("Masukkan massa jenis (kg/m3): ");
 scanf_s("%d", &p);

 v = m/p;
 printf("\nVolume = massa benda / massa jenis\n");
 printf("Volume = %d m3\n", v);
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
 printf("|              RUMUS MASSA JENIS BENDA              |\n");
 printf("=====================================================\n");
 printf("| 1. Hitung Massa Jenis                             |\n");
 printf("| 2. Hitung Massa Benda                             |\n");
 printf("| 3. Hitung Volume                                  |\n");
 printf("| 4. Keluar                                         |\n");
 printf("=====================================================\n");
 printf("Pilihan Anda : ");
 scanf_s("%i", &pilih);

 switch(pilih)
 {
 case 1: massajenis();
  break;
 case 2: massabenda();
  break;
 case 3: volume();
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
printf("\n\nSOAL LATIHAN PERHITUNGAN MASSA JENIS\n\n");
    //nomor 1//
    printf("1.)  Sebuah gelas ukur kosong di timabang dan bermasa 40 g, setelah gelas ukur kosong diisi air raksa");
    printf("\n     memiliki massa sebesar 176  gram. Diketahui volume raksa adalah 10 ml. Massa jenis raksa tersebut");
    printf("\n     adalah...");
    printf("\n     a.) 3.6 gram/cm3");
    printf("\n     b.) 10.6 gram/cm3");
    printf("\n     c.) 13.6 gram/cm3");
    printf("\n     d.) 16.3 gram/cm3");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='c')
        {printf("Benar, jawabannya adalah 13.6 gram/cm3.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  Volume sebuah benda 8 cm3 ditimbang massanya 84 gram, maka massa jenisnya adalah...");
    printf("\n     a.) 4.8 gr/cm3");
    printf("\n     b.) 6.4 gr/cm3");
    printf("\n     c.) 8.5 gr/cm3");
    printf("\n     d.) 10.5 gr/cm3");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 10.5 gr/cm3.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  Sebuah kubus kayu memiliki volume 5 cm3. Jika massa jenis kayu 250 g/cm3,");
    printf("\n     maka massa kayu tersebut adalah...");
    printf("\n     a.) 1250 g");
    printf("\n     b.) 50 g");
    printf("\n     c.) 10 g");
    printf("\n     d.) 2 g");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 1250 g.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Jika volume air 35 cm3 dan massa benda = 60 gram, maka massa jenis benda adalah...");
    printf("\n     a.) 2.40 g/cm3");
    printf("\n     b.) 1.71 g/cm3");
    printf("\n     c.) 1 g/cm3");
    printf("\n     d.) 0.63 g/cm3");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 1,71 g/cm3.");}
    else
    {printf("Salah, silahkan pelajari materi lagi.");nilai+=20;}
    //nomor 5//
    printf("\n\n5.)  Suatu logam aluminium mempunyai massa 120 gram dan volume 60 cm3 maka massa jenisnya adalah...");
    printf("\n     a.) 2 gr/cm3");
    printf("\n     b.) 20 gr/cm3");
    printf("\n     c.) 200 gr/cm3");
    printf("\n     d.) 2.000 gr/cm3");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 2 gr/cm3.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}

    //link video
    printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=P5zjL5MGGZs /n");
