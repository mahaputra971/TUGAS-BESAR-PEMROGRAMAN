#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define phi 3.14
#define MAKS 99


time_t waktuserver; //=============================================================>untuk fungsi waktu
char nama[MAKS], namaFile[MAKS], namaUser[MAKS]; //================================>nilai string maksimal string
float a, b, c, d, p, u, v, s, l, r, t, d1, d2, m, n, hasil, hasil2 = 0;  //========>variable untuk perhitungan rumus luas dan volume
int x, X, y, Y, z, Z, i, j, N, M, penanda, hasil4, pilih =0; //====================>variable untuk perhitungan rumus luas dan volume
int hasil3 = 0; //=================================================================>variable untuk perhitungan rumus deret
char ulang, ptv, YesNo; //=========================================================>variable untuk looping dan fungsi himpunan
int temp, q1, q2; //===============================================================>variable untuk tigaM
float median; //===================================================================>variable untuk tigaM
float mean; //=====================================================================>variable untuk tigaM
int data[],frekuensi[],modus,max=-1000,sum=0; //===================================>variable untuk fungsi tigaM
float km, hm, dam, dm, cm, mm; //==================================================>variable untuk konversi
int himpunan1[MAKS], himpunan2[MAKS], himpunanIrisan[MAKS]; //=====================>variable untuk Fungsi Himpunan
int himpunanGabungan[MAKS], himpunanSelisih[MAKS], himpunanKomplemen[MAKS], q; //==>variable untuk Fungsi Himpunan
long int f; //=====================================================================>variable untuk fungsi FPC
float jawaban; //==================================================================>untuk menginput jawaban di test user berupa essay
char jawabanPilihan; //============================================================>untuk menginput jawaban di test user berupa pilihan ganda
float bungaTunggal, bungaMajemuk, penyusutan, pertumbuhan, hargaAwal, hargaAkhir; //Varible untuk fungsi Bunga
float persen, modalAwal, modalAkhir, bulan; //=====================================>Varible untuk fungsi Bunga
int nilai=0; //====================================================================>Untuk menyimpan nilai test

FILE * fPointerz; //pointer untuk menyimpan data ke file

void luas() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
//variable "hasil" => menyimpan hasil perhitungan rumus
//variable p =======> panjang
//variable l =======> lebar
//variable t =======> tinggi
//variable d1 ======> diagonal pertama
//variable d2 ======> diagonal kedua
//variable r =======> jari - jari
//variable a =======> menentukan pilihan user

    system("cls");
    printf ("--------------------------------\n");
    printf ("| Menghitung Luas Suatu Bidang |\n");
    printf ("--------------------------------\n");
    printf ("(1) Segitiga  \n");
    printf ("(2) Segiempat \n");
    printf ("(3) Trapesium  \n");
    printf ("(4) Layang - Layang \n");
    printf ("(5) Lingkaran \n");
    printf ("MASUKAN KODE  : ");

    scanf ("%f", &a);
    printf("\n=================================================\n");
    if (a==1){
     printf ("\nMenghitung Luas Segitiga\n");
     printf ("Panjang(cm) : ");
     scanf ("%f", &p);
     printf ("\nTinggi(cm)  : ");
     scanf (" %f", &t);

     hasil = (p*t)/2;
     printf("\n===============================\n");
     printf("Pengerjaan:\n =>(Pangjang x Tinggi)/2) \n =>(%.1f x %.1f)/2\n => %.1f",p,t,hasil);
     printf("\n===============================\n");
     printf ("\nJadi, Luas Segitiga adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
    }
    else if (a==2){
     printf ("\nMenghitung Luas Segiempat\n");
     printf ("Panjang(cm): ");
     scanf ("%f", &p);
     printf ("\nLebar(cm)  : ");
     scanf (" %f", &l);

     hasil = (p*l);
     printf("\n===============================\n");
     printf ("\nLuas Segiempat adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
    }
    else if (a==3){
     printf ("\nMenghitung Luas Trapesium\n");
     printf ("Panjang Atas(cm)   : ");
     scanf ("%f", &p);
     printf ("\nPanjang Bawah(cm)  : ");
     scanf (" %f", &l);
     printf ("\ntinggi(cm)         : ");
     scanf (" %f", &t);

     hasil = ((p+l)*t)/2;
     printf("\n===============================\n");
     printf ("\nLuas Trapesium adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
 }
    else if (a==4){
     printf ("\nMenghitung Luas Layang - Layang\n");
     printf ("Panjang Diagonal 1(cm)   : ");
     scanf ("%f", &d1);
     printf ("\nPanjang Diagonal 2(cm)   : ");
     scanf (" %f", &d2);

     hasil = (d1*d2)/2;
     printf("\n====================================\n");
     printf ("\nLuas Layang - Layang adalah %.2f cm\n", hasil);
     printf("\n====================================\n");
 }
    else if (a==5){
     printf ("\nMenghitung Luas Lingkaran\n");
     printf ("Panjang jari - jari(cm)   : ");
     scanf ("%f", &r);

     if (r=r){

     hasil = (22*r*r/7);
     printf("\n====================================\n");
     printf ("\nLuas Lingkaran adalah %.2f cm\n", hasil);
     printf("\n====================================\n");
     }
    }

    else {printf("\n error !!! Silahkan masukan pilihan yang tepat\n\n"); luas();}
}

void volume() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
//variable "hasil" => menyimpan hasil perhitungan rumus
//variable p =======> panjang
//variable l =======> lebar
//variable t =======> tinggi
//variable r =======> jari - jari
//variable a,x =====> menentukan pilihan user

    system("cls");
    printf ("---------------------------------\n");
    printf ("| Menghitung Volume Suatu Ruang |\n");
    printf ("---------------------------------\n");
    printf ("(1) Kubus  \n");
    printf ("(2) Balok \n");
    printf ("(3) Limas/Krucut  \n");
    printf ("(4) Prisma \n");
    printf ("(5) Bola \n");
    printf ("(6) KELUAR \n");
    printf ("MASUKAN KODE  : ");
    scanf ("%f", &a);
    printf("\n=================================================\n\n");

     if (a==1){
     printf ("\nMenghitung Volume Kubus\n");
     printf ("Panjang rusuk(cm) : ");
     scanf ("%f", &p);

     hasil = (p*p*p);
     printf("\n=========================\n");
     printf ("\nVolume Kubus %.2f cm\n", hasil);
     printf("\n=========================\n");
    }
    else if (a==2){
     printf ("\nMenghitung Volume Balok\n");
     printf ("Panjang rusuk(cm): ");
     scanf ("%f", &p);
     printf ("\nLebar rusuk(cm)  : ");
     scanf (" %f", &l);
     printf ("\nTinggi rusuk(cm) : ");
     scanf (" %f", &t);

     hasil = (p*l*t);
     printf("\n===============================\n");
     printf ("\nVolume Balok adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
    }
    else if (a==3){
     printf ("(1) Limas segitiga  \n");
     printf ("(2) Limas Segiempat \n");
     printf ("(3) krucut \n");
     printf ("Tentukan Bentuk Limas : \n");
     scanf (" %i", &x);
       if (x==1){
       printf ("\nMenghitung Volume Limas segitiga \n");
       printf ("\nLebar alas(cm)  : ");
       scanf (" %f", &l);
       printf ("\npanjang alas(cm) : ");
       scanf (" %f", &p);
       printf ("tinggi limas(cm) : ");
       scanf (" %f", &t);
       hasil = (p*l*t)/3;
       printf("\n=====================================\n");
       printf ("\nVolume Limas segitiga adalah %.2f cm\n", hasil);
       printf("\n=====================================\n");
      }
      else if (x==2){
       printf ("\nMenghitung Volume Limas segiempat \n");
       printf ("\nLebar alas(cm)  : ");
       scanf (" %f", &l);
       printf ("\npanjang alas(cm) : ");
       scanf (" %f", &p);
       printf ("tinggi limas(cm) : ");
       scanf (" %f", &t);
       hasil = (p*l*t)/(3*2);
       printf("\n=====================================\n");
       printf ("\nVolume Limas segitiga adalah %.2f cm\n", hasil);
       printf("\n=====================================\n");
      }
      else if (x==3){
       printf ("\nMenghitung Volume krucut \n");
       printf ("\nPanjang Jari-Jari(cm)   : ");
       scanf (" %f", &r);
       printf ("\nTinggi(cm)              : ");
       scanf (" %f", &t);
       hasil = (22*r*t)/(3*7);
       printf("\n=============================\n");
       printf ("\nVolume Krucut adalah %.2f cm\n", hasil);
       printf("\n=============================\n");
      }

      else {printf("error !!!\n\n");}
    }

    else if (a==4){
     printf ("\nMenghitung Volume Prisma Segitiga\n");
     printf ("Panjang Alas(cm)    : ");
     scanf ("%f", &p);
     printf ("Tinggi Alas(cm)     : ");
     scanf (" %f", &l);
     printf ("Tinggi Prisma(cm)   : ");
     scanf (" %f", &t);

     hasil = (p*l*t)/2;
     printf("\n=============================\n");
     printf ("\nVolume Prisma Segitiga adalah %.2f cm\n", hasil);
     printf("\n=============================\n");
 }
    else if (a==5){
     printf ("\nMenghitung Volume Bola\n");
     printf ("Panjang jari - jari(cm)   : ");
     scanf ("%f", &r);
     if (r>0){
     hasil = (4*22*r*r*r/(7*3));
     printf("\n===========================\n");
     printf ("\nVolume Bola adalah %.2f cm\n", hasil);
     printf("\n===========================\n");
     }
    }
    else if (a==6){
         printf("Terima Kasih :)");
    }

    else {printf("error !!!\n\n");}
}

void deret() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
//variable hasil3 => besar angka ke-n
//variable hasil4 => jumlah total angka sampai ke-n
//variable x ======> angka terkecil suatu deret
//variable y ======> angka terbesar suatu deret
//variable z ======> beda suku suatu deret
//variable x ======> menentukan pilihan penguna

    system("cls");
    printf ("---------------------\n");
    printf ("| Perhitungan Deret |\n");
    printf ("---------------------\n");
    printf("Pilih Deret\n");
    printf("(1) Deret Arimatika\n");
    printf("(2) Deret Geometri\n");
    printf("(3) KELUAR \n");
    printf("MASUKAN KODE : ");
    scanf ("%i", &x);

    if (x==1){
       printf("Menghitung Deret Arimatika\n\n");
       printf("Masukan batas bawah  (a) : ");
       scanf ("%i", &x);
       printf("Masukan batas atas (f(n)): ");
       scanf (" %i", &y);
       printf("Masukan beda suku    (b) : ");
       scanf (" %i", &z);

       if(x<=y){
         for (x=x;x<=y;x+=z){
            printf ("%i\n", x);
            hasil3 += x;
            hasil4 ++;

            }
        if (x>0){
          printf ("\n jumlah (Sn)   = %i\n",hasil3);
          printf (" Banyaknya(Un) = %i\n", hasil4);
         }
        }
    }
    else if (x==2){
       printf("Menghitung Deret Geometri\n\n");
       printf("Masukan batas bawah (a) : ");
       scanf ("%i", &x);
       printf("Masukan batas atas  (n): ");
       scanf (" %i", &y);
       printf("Masukan beda suku   (r) : ");
       scanf (" %i", &z);

       if(x<=y){
         for (x=x;x<=y;x*=z){
            printf ("%i\n", x);
            hasil3 += x;
            hasil4 ++;

            }
        if (x>0){
          printf ("\n jumlah    (Sn) = %i\n",hasil3);
          printf (" Banyaknya (Un) = %i\n", hasil4);
         }
        }
    }
    else if (x==3){
         printf("Terima Kasih :)");
    }
    else ("\n\nERROR!!!\n\n");
}

void luaspermukaanruang() //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
{
float luaspermukaan;//------------=> untuk menyimpan nilai nilai dari perhitungan rumus
                    // variable p => panjang suatu bangun ruang
                    // variable l => lebar suatu bangun ruang
                    // variable t => tinggi bangun ruang
                    // variable u => tinggi alas
                    // variable s => rusuk bangun ruang dan sisi segitiga pada Limas Segitiga
                    // variable r => jari - jari bangun ruang
                    // variable p => panjang sisi miring pada prisma segitiga
system("cls");
printf("=====================================================\n");
printf("|   Program Menghitung Luas Permukaan Bangun Ruang  |\n");
printf("=====================================================\n");
printf("| 1. Hitung Luas Permukaan Balok                    |\n");
printf("| 2. Hitung Luas Permukaan Limas Segitiga Sama Sisi |\n");
printf("| 3. Hitung Luas Permukaan Prisma Segitiga          |\n");
printf("| 4. Hitung Luas Permukaan Kubus                    |\n");
printf("| 5. Hitung Luas Permukaan Bola                     |\n");
printf("| 6. Keluar                                         |\n");
printf("=====================================================\n");
printf("Pilihan Anda : ");
scanf("%d", &pilih);
switch(pilih)
{
case 1 :
printf("\n");
printf("=====================================================\n");
printf("|            Hitung Luas Permukaan Balok            |\n");
printf("=====================================================\n");
printf("Input Panjang (cm) : ");
scanf("%f",&p);
printf("Input Tinggi (cm) : ");
scanf("%f",&t);
printf("Input Lebar (cm) : ");
scanf("%f",&l);
luaspermukaan=(2*(p*l))+(2*(p*t))+(2*(l*t));
printf("2(Panjang x Lebar) + 2(Panjang x Tinggi) + 2(Lebar x Tinggi) \n");
printf("Luas Permukaan Balok : %.2f cm \n",luaspermukaan);
break;

case 2 :
printf("\n");
printf("=====================================================\n");
printf("|   Hitung Luas Permukaan Limas Segitiga Sama Sisi  |\n");
printf("=====================================================\n");
printf("Input Sisi Segitiga (cm) : ");
scanf("%f",&s);
luaspermukaan =s*s;
printf("((1/4 akar 3) x s x s) x 4\n");
printf("Luas Permukaan Limas Segitiga Sama Sisi : %.2f akar 3\n",luaspermukaan);
break;

case 3 :
printf("\n");
printf("=====================================================\n");
printf("|       Hitung Luas Permukaan Prisma Segitiga       |\n");
printf("=====================================================\n");
printf("Input Alas Segitiga Alas (cm) : ");
scanf("%f",&a);
printf("Input Tinggi Segitiga Alas (cm) : ");
scanf("%f",&u);
printf("Input Sisi Miring Segitiga Alas (cm) : ");
scanf("%f",&p);
printf("Input Tinggi Prisma (cm) : ");
scanf("%f",&t);
luaspermukaan =(a*u)+((a+u+p)*t);
printf("(2 x Luas Alas) + (Keliling alas x Tinggi) \n");
printf("Luas Permukaan Prisma Segitiga : %.2f \n", luaspermukaan);
break;

case 4 :
printf("\n");
printf("=====================================================\n");
printf("|             Hitung Luas Permukaan Kubus           |\n");
printf("=====================================================\n");
printf("Input Sisi Kubus (cm) : ");
scanf("%f",&s);
luaspermukaan =6*s*s;
printf("6 x Sisi x Sisi \n");
printf("Luas Permukaan Kubus: %.2f cm \n", luaspermukaan);
break;

case 5 :
printf("\n");
printf("=====================================================\n");
printf("|              Hitung Luas Permukaan Bola           |\n");
printf("=====================================================\n");
printf(" Input Jari-Jari (cm) : ");
scanf("%f",&r);
luaspermukaan =(4*22*(r*r))/7;
printf("4 x Phi x (Jari-Jari x Jari-Jari) \n");
printf(" Luas Permukaan Bola : %.2f cm \n",luaspermukaan);
break;

case 6 :
break;

default : printf("Pilihan Anda Salah!\n");
}
}

void perhitunganpeta() //Dikerjakan oleh I Gede Adhi Heryawan Kartika Utama (2005551111)
{
system("cls");
float jarakpeta, jaraksebenarnya,skala;
//variable "jarakpeta" =======> menyimpan nilai jarak pada peta yang dimasukan user
//variable "jaraksebenarnya" => menyimpan nilai jarak sebenarnya yang dimasukan user
//variable "sekala" ==========> meyimpan perbandingan sekala yang dimasukan user
ulangi:
printf ("-----------------------\n");
printf ("| Perhitungan Peta |\n");
printf ("-----------------------\n");
printf ("(1) Menghitung Jarak Pada Peta\n");
printf ("(2) Menghitung Jarak Sebenarnya\n");
printf ("(3) Menghitung Sekala Peta\n");
printf ("MASUKAN PILIHAN ANGKA DIATAS: ");
scanf("%i", &x);
switch(x)
 {
 case 1:
  printf("Masukkan jarak pada peta = ");
  scanf("%f", &jarakpeta);
  printf("Masukkan skala = 1 : ");
  scanf("%f", &skala);
  jaraksebenarnya =  jarakpeta * skala;
  printf("Maka jarak sebenarnya adalah %.f", jaraksebenarnya);
  break;
 case 2:
  printf("Masukkan jarak sebenarnya = ");
  scanf("%f", &jaraksebenarnya);
  printf("Masukkan skala = 1 : ");
  scanf("%f", &skala);
  jarakpeta =  jaraksebenarnya / skala;
  printf("Maka jarak pada peta adalah  %.f", jarakpeta);
  break;
 case 3:
  printf("Masukkan jarak pada peta  = ");
  scanf("%f", &jarakpeta);
  printf("Masukkan jarak sebenarnya = ");
  scanf("%f", &jaraksebenarnya);
  skala =  jaraksebenarnya / jarakpeta;
  printf("Maka skalanya adalah 1 : %.f", skala);
  break;
  default: printf("Pilihan Anda Salah! Silahkan Masukan Angka Yang Tertera diatas\n\n");
           goto ulangi;
 }

}

void tigaM() //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
{
//variable "pilih" ====> Untuk menentukan pilihan pengguna
//variable N ==========> Untuk menginput panjang array
//variable i ==========> Untuk proses looping
//variable "data[]" ===> Untuk menyimpan data array
//variable "median" ===> Untuk menyimpan nilai dari perhitungan median
//variable "mean" =====> Untuk menyimpan nilai dari perhitungan mean
//variable "modus" ====> Untuk menyimpan nilai dari perhitungan modus
//variabble "sum" =====> Untuk menyimpan total jumlah nilai dari suatu array
//variable

system("cls");
printf("=====================================================\n");
printf("|      Program mencari median, mean, dan modus      |\n");
printf("=====================================================\n");
printf("| 1. Mencari Median                                 |\n");
printf("| 2. Mencari Mean                                   |\n");
printf("| 3. Mencari Modus                                  |\n");
printf("| 4. Keluar                                         |\n");
printf("=====================================================\n");
printf("Pilihan Anda : ");
scanf("%d", &pilih);
switch(pilih)
 {
 case 1 :
    //input jumlah data
    printf("masukkan jumlah data: "); scanf("%d",&N);fflush(stdin);

    for(i=0;i<N;i++){
                     printf("masukkan data ke-%d <0..9>: ",i+1);
                     scanf(" %d",&data[i]);
                    }
    for(i=0;i<(N-1);i++){
                         for(j=i;j<N;j++){
                         if(data[j]<data[i]){
                                               temp=data[i];
                                               data[i]=data[j];
                                               data[j]=temp; };
                                               };
                                               }
    printf("\ndata setelah diurutkan: \n");
    for(i=0;i<N;i++){
                     printf("%d\n",data[i]);}
                     printf("\n\n");
    if(N%2==1){q2=(N/2);
                        median=data[q2];
                        printf("\nmedian adalah: %.2f",median);}
    else if(N%2==0){q1=(N/2)-1; q2=(N/2);
                    median=((float)data[q1]+(float)data[q2])/2;
                    printf("\nmedian adalah: %.2f",median);}

    printf("\n");
    break;
 case 2 :
    //input jumlah data
    printf("masukkan jumlah data: "); scanf("%d",&N);fflush(stdin);

    for(i=0;i<N;i++){
                     printf("masukkan data ke-%d <0..9>: ",i+1);scanf("%d",&data[i]);
                     sum=sum+data[i];
                     }

    printf("\n\n");
    printf("\ndata setelah diurutkan: ");
    mean=(float)sum/N;
    printf("mean adalah: %.2f\n",mean);
    break;
 case 3 :
     //input jumlah data
    printf("masukkan jumlah data: "); scanf("%d",&N);fflush(stdin);

    for(i=0;i<N;i++){
                     printf("masukkan data ke-%d <0..9>: ",i+1);scanf("%d",&data[i]);
                     }

    printf("\n\n");
    printf("\ndata setelah diurutkan: ");
    for(i=0;i<N;i++)
    {
     printf("%d ", data[i]);
    }

    for(i=0;i<10;i++){frekuensi[i]=0;
                      for(j=0;j<N;j++){
                                       if(data[j]==i){frekuensi[i]=frekuensi[i]+1;};
                                      }
                      if(frekuensi[i]>max) {max=frekuensi[i];modus=i;}
                      };
                          printf("modusnya adalah: %d\n\n",modus);
 break;
 case 4 :
     printf("Terimakasih \n");
     break;
 default : printf("Pilihan Anda Salah!\n");
}
}

void konversi() //Dikerjakan oleh I Gede Adhi Heryawan Kartika Utama (2005551111)
{
//variable km, hm. dam, m, dm, cm, m => Nilai Satuan Pangjang
//variable "pilih" ===================> Menentukan pilihan dari user satuan yang mana ingin dihitung
//variable "ulang" ===================> Menentukan pilihan untuk mengulah ataukah tidak mengulang program

    system("cls") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("\t  PROGRAM KONVERSI SATUAN PANJANG\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("1. Kilometer   (km)\n") ;
    printf("2. Hektometer  (hm)\n") ;
    printf("3. Dekameter   (dam)\n") ;
    printf("4. Meter       (m)\n")  ;
    printf("5. Desimeter   (dm)\n") ;
    printf("6. Centimeter  (cm)\n") ;
    printf("7. Milimeter   (mm)\n") ;
    printf("8. Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Konversi dari : ") ;
    scanf("%d",&pilih) ;

    if (pilih==1) {
    kilometer:
    system("cls") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
    printf("\t  PROGRAM KONVERSI SATUAN PANJANG\n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Masukkan panjang (kilometer) : ") ;
    scanf("%f",&km) ;
    printf("\nHasil :\n") ;
    printf("%0.1f km dalam satuan hektometer (hm) : %.1f hm \n",km,km*10) ;
    printf("%0.1f km dalam satuan dekameter (dam) : %.1f dam \n",km,km*100) ;
    printf("%0.1f km dalam satuan meter       (m) : %.1f m \n",km,km*1000) ;
    printf("%0.1f km dalam satuan desimeter  (dm) : %.1f dm \n",km,km*10000) ;
    printf("%0.1f km dalam satuan centimeter (cm) : %.1f cm \n",km,km*100000) ;
    printf("%0.1f km dalam satuan milimeter  (mm) : %.1f mm \n",km,km*1000000) ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("R : Ulangi program ini \n") ;
    printf("M : Kembali ke menu utama \n") ;
    printf("Q : Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Pilih : ") ;
    scanf("%s",&ulang) ;
        if (ulang=='R' ||ulang=='r') {
            goto kilometer;
        }
        else if (ulang=='M' ||ulang=='m') {
            return konversi() ;
        }
        else if (ulang=='Q' ||ulang=='q') {
            printf("Terima Kasih");
        }
        else {
            printf("ERROR!!! \n") ;
        }
    }

    else if (pilih==2) {
    system ("cls") ;
    hektometer:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("\t  PROGRAM KONVERSI PANJANG\n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Masukkan panjang (hektometer) : ") ;
    scanf("%f",&hm) ;
    printf("\nHasil :\n") ;
    printf("%0.1f hm dalam satuan kilometer  (km) : %0.1f km \n",hm,hm/10) ;
    printf("%0.1f hm dalam satuan dekameter (dam) : %0.1f dam \n",hm,hm*10) ;
    printf("%0.1f hm dalam satuan meter       (m) : %0.1f m \n",hm,hm*100) ;
    printf("%0.1f hm dalam satuan desimeter  (dm) : %0.1f dm \n",hm,hm*1000) ;
    printf("%0.1f hm dalam satuan centimeter (cm) : %0.1f cm \n",hm,hm*10000) ;
    printf("%0.1f hm dalam satuan milimeter  (mm) : %0.1f mm \n",hm,hm*100000) ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf(" 'R' : Ulangi program ini \n") ;
    printf(" 'M' : Kembali ke menu utama \n") ;
    printf(" 'Q' : Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Pilih : ") ;
    scanf("%s",&ulang) ;
        if (ulang=='R'||ulang=='r') {
            goto hektometer;
        }
        else if (ulang=='M'||ulang=='m') {
            return konversi() ;
        }
        else if (ulang=='Q'||ulang=='q') {
            printf("Terima Kasih");
        }
        else {
            printf("ERROR!!! \n" ) ;
        }
    }

    else if (pilih==3) {
    system("cls") ;
    dekameter:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("\t  PROGRAM KONVERSI SATUAN PANJANG\n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Masukkan panjang (dekameter) : ") ;
    scanf("%f",&dam) ;
    printf("\nHasil :\n") ;
    printf("%0.1f dam dalam satuan kilometer  (km) : %.2f km\n",dam,dam/100) ;
    printf("%0.1f dam dalam satuan hektometer (hm) : %.1f hm \n",dam,dam/10) ;
    printf("%0.1f dam dalam satuan meter       (m) : %.1f m \n",dam,dam*10) ;
    printf("%0.1f dam dalam satuan desimeter  (dm) : %.1f dm \n",dam,dam*100) ;
    printf("%0.1f dam dalam satuan centimeter (cm) : %.1f cm \n",dam,dam*1000) ;
    printf("%0.1f dam dalam satuan milimeter  (mm) : %.1f mm \n",dam,dam*10000) ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("R : Ulangi program ini \n") ;
    printf("M : Kembali ke menu utama \n") ;
    printf("Q : Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Pilih : ") ;
    scanf("%s",&ulang);
        if (ulang=='R'||ulang=='r') {
         goto dekameter ;
        }
        else if (ulang=='M'||ulang=='m') {
            return konversi () ;
        }
        else if (ulang=='Q'||ulang=='q') {
            return 0;
        }
        else {
            printf ("ERROR!!! \n") ;
          }
        }

    else if (pilih==4) {
    system("cls") ;
    meter:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("\t  PROGRAM KONVERSI SATUAN PANJANG\n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Masukkan pamjang (meter) : ") ;
    scanf (" %f", &m);
    printf("%0.1f m dalam satuan kilometer  (km) : %.3f m \n",m,m/1000) ;
    printf("%0.1f m dalam satuan hektometer (hm) : %.2f hm \n",m,m/100) ;
    printf("%0.1f m dalam satuan dekameter  (dam): %.1f dam \n",m,m/10) ;
    printf("%0.1f m dalam satuan desimeter  (dm) : %.1f dm \n",m,m*10) ;
    printf("%0.1f m dalam satuan centimeter (cm) : %.1f cm \n",m,m*100) ;
    printf("%0.1f m dalam satuan milimeter  (mm) : %.1f mm \n",m,m*1000) ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("R : Ulang program ini \n") ;
    printf("M : Kembali ke menu utama \n") ;
    printf("Q : Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Pilih : ") ;
    scanf("%s",&ulang) ;
        if (ulang=='R'||ulang=='r') {
            goto meter ;
        }
        else if (ulang=='M'||ulang=='m') {
            return konversi () ;
        }
        else if (ulang=='Q'||ulang=='q') {
            return 0 ;
        }
        else {
            printf("ERROR!!! \n") ;
        }
    }

    else if (pilih==5) {
    system("cls") ;
    desimeter:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("\t  PROGRAM KONVERSI SATUAN PANJANG\n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Masukkan pamjang (desimeter) : ") ;
    scanf("%f",&dm);
    printf("%0.1f dm dalam satuan kilometer  (km) : %.4f km \n",dm,dm/10000) ;
    printf("%0.1f dm dalam satuan hektometer (hm) : %.3f hm \n",dm,dm/1000) ;
    printf("%0.1f dm dalam satuan dekameter  (dam): %.2f dam \n",dm,dm/100) ;
    printf("%0.1f dm dalam satuan meter      (m)  : %.1f m \n",dm,dm/10) ;
    printf("%0.1f dm dalam satuan centimeter (cm) : %.1f cm \n",dm,dm*10) ;
    printf("%0.1f dm dalam satuan milimeter  (mm) : %.1f mm \n",dm,dm*100) ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("R : Ulang program ini \n") ;
    printf("M : Kembali ke menu utama \n") ;
    printf("Q : Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Pilih : ") ;
    scanf("%s",&ulang) ;
        if (ulang=='R'||ulang=='r') {
            goto desimeter;
        }
        else if (ulang=='M'||ulang=='m') {
            return konversi () ;
        }
        else if (ulang=='Q'||ulang=='q') {
            return 0 ;
        }
        else {
            printf("ERROR!!! \n") ;
        }
    }

    else if (pilih==6) {
    system("cls") ;
    centimeter:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("\t  PROGRAM KONVERSI SATUAN PANJANG\n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Masukkan pamjang (centimeter) : ") ;
    scanf ("%f", &cm);
    printf("%0.1f cm dalam satuan kilometer  (km) : %.5f km \n",cm,cm/100000) ;
    printf("%0.1f cm dalam satuan hektometer (hm) : %.4f hm \n",cm,cm/10000) ;
    printf("%0.1f cm dalam satuan dekameter  (dam): %.3f dam \n",cm,cm/1000) ;
    printf("%0.1f cm dalam satuan meter      (m)  : %.2f m \n",cm,cm/100) ;
    printf("%0.1f cm dalam satuan desimeter  (dm) : %.1f dm \n",cm,cm/10) ;
    printf("%0.1f cm dalam satuan milimeter  (mm) : %.1f mm \n",cm,cm*10) ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("R : Ulang program ini \n") ;
    printf("M : Kembali ke menu utama \n") ;
    printf("Q : Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Pilih : ") ;
    scanf("%s",&ulang) ;
        if (ulang=='R'||ulang=='r') {
            goto centimeter;
        }
        else if (ulang=='M'||ulang=='m') {
            return konversi () ;
        }
        else if (ulang=='Q'||ulang=='q') {
            return 0 ;
        }
        else {
            printf("ERROR!!! \n") ;
        }
    }

    else if (pilih==7) {
    system("cls") ;
    milimeter:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("\t  PROGRAM KONVERSI SATUAN PANJANG\n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Masukkan pamjang (milimeter) : ") ;
    scanf ("%f", &mm);
    printf("%0.1f mm dalam satuan kilometer  (km) : %.6f km \n",mm,mm/1000000) ;
    printf("%0.1f mm dalam satuan hektometer (hm) : %.5f hm \n",mm,mm/100000) ;
    printf("%0.1f mm dalam satuan dekameter  (dam): %.4f dam \n",mm,mm/10000) ;
    printf("%0.1f mm dalam satuan meter      (m)  : %.3f m \n",mm,mm/1000) ;
    printf("%0.1f mm dalam satuan desimeter  (dm) : %.2f dm \n",mm,mm/100) ;
    printf("%0.1f mm dalam satuan centimeter (cm) : %.1f cm \n",mm,mm/10) ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("R : Ulang program ini \n") ;
    printf("M : Kembali ke menu utama \n") ;
    printf("Q : Keluar \n") ;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n") ;
    printf("Pilih : ") ;
    scanf("%s",&ulang) ;
        if (ulang=='R'||ulang=='r') {
            goto milimeter;
        }
        else if (ulang=='M'||ulang=='m') {
            return konversi () ;
        }
        else if (ulang=='Q'||ulang=='q') {
            return 0 ;
        }
        else {
            printf("ERROR!!! \n") ;
        }
    }

    else if (pilih==8) {
             printf ("Terima Kasih");

    }
    else {
             printf("\nERROR, Masukan pilihan yang tersedia! \n\n");
             return konversi ();
    }
}

void himpunan() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
//variable "pilih" =============> menentukan pilihn user
//variable 'M' =================> input panjang Himpunan A
//variable 'N' =================> input panjang Himpunan B
//variable 'i' =================> looping Himpunan A
//variable 'j' =================> looping Himpunan B
//variable "Himpunan1" =========> menyimpan nilai Himpunan A
//variable "Himpunan2" =========> menyimpan nilai Himpunan B
//variable "himpunanGabungan" ==> menyimpan nilai dari Gabungan Himpunan A & B (AuB)
//variable "himpunanIrisn" =====> menyimpan nilai dari Irisn Himpunan A & B (AnB)
//variable "himpunanSelisih" ===> menyimpan nilai dari Silisih Himpunan A & B (A-B)
//variable "himpunanKomplemen" => menyimpan nilai dari Komplemen Himpunan A & B (AuB)^t

system("cls");
printf ("-----------------------\n");
printf ("| Menghitung Himpunan |\n");
printf ("-----------------------\n");
printf ("(1) Gabungan (AuB) \n");
printf ("(2) Irisan (AnB) \n");
printf ("(3) Selisih (A-B) \n");
printf ("(4) Komplemen (AuB)^t \n");
printf("Masukan pilihan: ");
scanf (" %i", &pilih);
switch(pilih){

case 1:
printf ("Silahkan isi Data Himpunan A\n");
printf ("Banyak Data (angka):");
scanf("%i", &M); //INPUT A
for(i=0;i<M;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan1[i]);
}
printf ("--------\nbaris = {");
tampilkan(himpunan1, M); //Menampilan A
printf ("}\n--------\n");
//n=0;
printf ("\nSilahkan isi Data Himpunan B\n");
printf ("Banyak Data (angka):");
scanf("%i", &N); //INPUT B
for(i=0;i<N;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan2[i]);
  }
printf ("--------\nbaris = {");
tampilkan(himpunan2,  N); //Menampilkan B
printf ("}\n-------\n");
//RUMUS
for(i=0;i<M;i++){
    himpunanGabungan[i]=himpunan1[i];
}

for(j=0;j<N;j++){
    penanda=0;
    for(i=0;i<M;i++){
        if (himpunan2[j]== himpunan1[i]){
           penanda=1;
        }
    }
    if (penanda==0){
        himpunanGabungan[M]=himpunan2[j];
        M++;
    }
}

printf("\nGabungan dari kedua Himpunan tersebut: \n{");
printf ("{%i", himpunanGabungan[0]);
for (i=1;i<M;i++){
    printf (", %i", himpunanGabungan[i]);
}
printf("}");
break;

case 2:
printf ("Silahkan isi Data Himpunan A\n");
printf ("Banyak Data (angka):");
scanf("%i", &M);
for(i=0;i<M;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan1[i]);
}
printf ("--------\nbaris = {");
tampilkan(himpunan1, M);
printf ("}\n--------\n");
//n=0;
printf ("\nSilahkan isi Data Himpunan B\n");
printf ("Banyak Data (angka):");
scanf("%i", &N);
for(i=0;i<N;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan2[i]);
  }
printf ("--------\nbaris = {");
tampilkan(himpunan2, N);
printf ("}\n-------\n");

q = 0;
for (i=0;i<M;i++)
    {
    for (j=0;j<N;j++)
        {
        if (himpunan1[i]==himpunan2[j])
            {
            himpunanIrisan[q]=himpunan2[j];
            q++;
            }
        }
    }
printf("\nIrisan dari kedua Himpunan tersebut: \n{");
printf("%i", himpunanIrisan[0]);
for (i=1;i<q;i++){
  printf(", %i", himpunanIrisan[i]);
}
printf("}\n\n");
break;

case 3:
printf ("Silahkan isi Data Himpunan A\n");
printf ("Banyak Data (angka):");
scanf("%i", &M); //INPUT A
for(i=0;i<M;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan1[i]);
}
printf ("--------\nbaris = {");
tampilkan(himpunan1, M); //Menampilan A
printf ("}\n--------\n");
//n=0;
printf ("\nSilahkan isi Data Himpunan B\n");
printf ("Banyak Data (angka):");
scanf("%i", &N); //INPUT B
for(i=0;i<N;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan2[i]);
  }
printf ("--------\nbaris = {");
tampilkan(himpunan2,  N); //Menampilkan B
printf ("}\n-------\n");
//RUMUS
q=0;
for(i=0;i<M;i++){
    penanda=0;
    for(j=0;j<N;j++){
        if(himpunan1[i]==himpunan2[j]){
            penanda=1;
        }
    }
    if (penanda==0){
        himpunanSelisih[q]=himpunan1[i];
        q++;
    }
}

printf("{%i", himpunanSelisih[0]);
for (i=1;i<q;i++){
    printf(", %i", himpunanSelisih[i]);
}
printf("}");
break;

case 4:
printf ("Silahkan isi Data Himpunan A\n");
printf ("Banyak Data (angka):");
scanf("%i", &M); //INPUT A
for(i=0;i<M;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan1[i]);
}
printf ("--------\nbaris = {");
tampilkan(himpunan1, M); //Menampilan A
printf ("}\n--------\n");
//n=0;
printf ("\nSilahkan isi Data Himpunan B\n");
printf ("Banyak Data (angka):");
scanf("%i", &N); //INPUT B
for(i=0;i<N;i++){
   printf("Angka ke-%i: ", i+1);
   scanf (" %i", &himpunan2[i]);
  }
printf ("--------\nbaris = {");
tampilkan(himpunan2,  N); //Menampilkan B
printf ("}\n-------\n");
//RUMUS
q=0;
for(i=0;i<M;i++){
    penanda=0;
    for(j=0;j<N;j++){
        if(himpunan1[i]==himpunan2[j]){
            penanda=1;
        }
    }
    if (penanda==0){
        himpunanKomplemen[q]=himpunan1[i];
        q++;
    }
}
for(j=0;j<N;j++){
    penanda=0;
    for(i=0;i<M;i++){
        if(himpunan2[j]==himpunan1[i]){
            penanda=1;
        }
    }
    if (penanda==0){
        himpunanKomplemen[q]=himpunan2[j];
        q++;
    }
}

printf("{%i", himpunanKomplemen[0]);
for (i=1;i<q;i++){
    printf(", %i", himpunanKomplemen[i]);
}
printf("}");
break;

default:
printf("\n\n ERROR! (mohon masukan pilihan yang benar) \n\n ");
return himpunan();
}
}

void tampilkan(int himpunan[], int n) //Fungsi untuk di Fungsi Himpunan
{
if (n==n){
printf("%i", himpunan [0]);
   for(i=1;i<n;i++)
      {
      printf(", %i", himpunan [i]);
      }
   }
}

void FPC () //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
{
//variable 'N' =====> Bilangan awal disebelum diFaktorilalkan
//variable 'f' =====> Bilngan akhir setelah diFaktorialkan
//variable 'n' =====> Banyak seluruh anggota di Kombinasi/Permutasi
//variable 'r' =====> Banyak anggota yang dibutuhkan di Kombinasi/Permutsi
//variable "pilih" => menentukan plihan user
//variable "hasil" => hasil akhir dari perhitungan Kombinasi/Permutasi

do{
system("cls");
printf("\n======================================================\n");
printf("| Program Menghitung Faktorial, Kombinasi, Permutasi |\n");
printf("======================================================\n");
printf ("(1) Program Menghitung Faktorial\n");
printf ("(2) Program Menghitung Kombinasi\n");
printf ("(3) Program Menghitung Permutasi\n");
printf ("Masukan Pilihan :");
scanf ("%d", &pilih);

if(pilih==1){
printf("=====================================================\n");
printf("|              Program Menghitung Faktorial         |\n");
printf("=====================================================\n");
printf("Masukkan suatu bilangan bulat : ");
scanf("%d",&N);
if (N<0)
{
printf("Bilangan harus positif!");
}
else {
f = faktorial(N);
printf("\n");
printf("Nilai %d! adalah : %ld \n\n", N, f);
}
}

else if(pilih==2)
{
long int hasil;
int n,r; //tdinya ini fload bisa berubah jadi int
printf("=====================================================\n");
printf("|            Program Menghitung Kombinasi           |\n");
printf("=====================================================\n");
printf("nCr = n!/r!*(n-r)!\n");
printf("Masukkan nilai n : ");
scanf("%d",&n);
printf("Masukkan nilai r : ");
scanf("%d",&r);
if (n<r)
{
printf("Nilai n tidak boleh lebih kecil dari r\n");
} else {
hasil = faktorial(n)/(faktorial(r) * faktorial(n-r));
printf("\n");
printf("%dC%d = %ld \n\n",n,r,hasil);
}
}

else if(pilih==3)
{
long int hasil;
int n,r;
printf("=====================================================\n");
printf("|            Program Menghitung Permutasi           |\n");
printf("=====================================================\n");
printf("nPr = n!/(n-r)!\n");
printf("Masukkan nilai n : ");
scanf("%d",&n);
printf("Masukkan nilai r : ");
scanf("%d",&r);
if (n<r)
{
printf("Nilai n tidak boleh lebih kecil dari r");
} else {
hasil = faktorial(n)/faktorial(n-r);
printf("\n");
printf("%dP%d = %ld \n",n,r,hasil);
}
}
printf("Ulangi Perhitungan? ((Y)=YA / (N)=Tidak) : ");
pilih = (char) pilih;
scanf(" %c", &pilih);
}
while (pilih=='y'||pilih=='Y');
}

int faktorial(int N) //Fungsi untuk di Fungsi FPC
{
long int F;
if (N<=1)
{
return(1);
} else {
F = N * faktorial(N-1);
return(F);
}
}

void bunga() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
    ulangBunga:
    system("cls");
    system ("color 02");
    printf("\n=======================\n");
    printf("PERHITUNGAN HARGA BUNGA");
    printf("\n=======================\n");
    printf("(1) Bunga Tunggal\n");
    printf("(2) Bunga Majemuk\n");
    printf("(3) Penyusutan\n");
    printf("(4) Pertumbuhan\n");
    printf("(5) Potongan Harga\n");
    printf("(6) KELUAR\n");
    printf("MASUKAN KODE YANG INGIN DIPROSES: "); scanf("%i", &pilih);

    if(pilih==1)
    {
        system("cls");
        printf("\n=========================\n");
        printf("-Menghitung Bunga Tunggal-");
        printf("\n=========================\n\n");
        dataBunga();
        printf("Bunga Tunggal = Modal Awal x (1 + bulan x bunga)");
        printf("\nBunga Tunggal = Rp.%.2f,- x (1 + %.0f x %.0f/100) ", modalAwal,bulan, persen);
        bungaTunggal=modalAwal*(1+(bulan*persen)/100);
        printf("Jadi, Bunga Tunggal perhitungan diatas adalah Rp.%.2f,-", bungaTunggal);
    }

    else if(pilih==2)
    {
        system("cls");
        printf("\n==========================\n");
        printf("-Menghitung Bunga Majemuk-");
        printf("\n==========================\n\n");
        dataBunga();
        printf("Bunga Majemuk = Modal Awal x (1 + bunga)^bulan");
        printf("\nBunga Majemuk = Rp.%.2f,- x (1 + %.0f/100)^%.0f ", modalAwal,persen,bulan);
        bungaMajemuk=modalAwal*pow((1+(persen/100)),bulan);
        printf("Jadi, Bunga Majemuk perhitungan diatas adalah Rp.%.2f,-", bungaMajemuk);
    }

     else if(pilih==3)
    {
        system("cls");
        printf("\n=======================\n");
        printf("-Menghitung Penyusutan-");
        printf("\n=======================\n\n");
        dataBunga();
        printf("Penyusutan = Modal Awal x (1 - bulan x persen)");
        printf("\nPenyusutan = Rp.%.2f,- x (1 - %.0f x %.0f/100)", modalAwal,bulan,persen);
        penyusutan=modalAwal*(1-bulan*persen/100);
        printf("Jadi, perhitungan penyusutan diatas adalah Rp.%.2f,-", penyusutan);
    }

     else if(pilih==4)
    {
        system("cls");
        printf("\n=======================\n");
        printf("-Menghitung Pertumbuhan-");
        printf("\n=======================\n");
        dataBunga();
        printf("Pertumbuhan = Modal Awal x (1 + persen)^bulan");
        printf("\nPertumbuhan = Rp.%.2f,- x (1 + %.0f/100)^%.0f", modalAwal,persen,bulan);
        pertumbuhan=modalAwal*(1-bulan*persen);
        printf("Jadi, perhitungan penyusutan diatas adalah Rp.%.2f,-", pertumbuhan);
    }

    else if(pilih==5)
    {
        ulangHarga:
        system("cls");
        system("color 02");
        printf("\n=======================\n");
        printf("-Menghitung Potongan Harga-");
        printf("\n=======================\n");
        printf("(1) Mencari harga awal\n");
        printf("(2) Mencari harga akhir\n");
        printf("MASUKAN PILIHAN: "); scanf("%i", &pilih);
        switch(pilih)
        {
        case 1:
        system("cls");
        printf("\n=======================\n");
        printf("-Menghitung Harga Awal-");
        printf("\n=======================\n");
        printf("\nMasukan harga akhir(Rp) : "); scanf(" %f", &hargaAkhir);
        printf("Potongan Bunga(persen)  : "); scanf(" %f", &bungaTunggal);
        printf("\n\nHASIL: \n");
        printf("Harga Awal = (Harga Akhir x (bunga+100)/100)");
        hargaAwal = (hargaAkhir*100)/(bungaTunggal+100);
        printf("\nJadi, Harga Awalnya adalah Rp.%.2f,-\n\n", hargaAwal);
        break;
        case 2:
        system("cls");
        printf("\n=======================\n");
        printf("-Menghitung Harga Akhir-");
        printf("\n=======================\n");
        printf("\nMasukan harga awal(Rp) : "); scanf(" %f", &hargaAwal);
        printf("Potongan Bunga(persen) : "); scanf("%f", &bungaTunggal);
        printf("\nHASIL: \n");
        printf("Harga Awal = (Harga Awal x 100/(bunga+100))");
        hargaAkhir= (hargaAwal*(bungaTunggal+100))/100;
        printf("\nJadi, Harga Awalnya adalah Rp.%.2f,-\n\n", hargaAkhir);
        break;

        default:
        system("color 04");
        printf("\n=====================================================\n");
        printf("Pilihan Anda Salah, Silahkan Masukan Angka Yang Tepat.\n");
        printf("\n=====================================================\n");
        goto ulangHarga;
        }
    }

    else if(pilih==6)
    {
        printf("\n===========\n");
        printf("Terima Kasih");
        printf("\n===========\n");
    }

    else
    {
        system("color 04");
        printf("\n==========================================\n");
        printf("Error!!!\nSilahkan Masukkan Angka yang benar\n\n");//goto ulangBunga;
        printf("\n===========================================\n");
    }

}

void dataBunga() //Fungsi untuk Fungsi Bunga
{
        printf("Masukan modal awal(Rp)                     : "); scanf("%f", &modalAwal);
        printf("Waktu yang dibutuhkan ke modal akhir(Bulan): "); scanf("%f", &bulan);
        printf("Besar bunga perBulan(persen)               : "); scanf("%f", &persen);
        printf("\n\nHASIL : ");
}

void waktu() //Fungsi untuk Waktu
{
    time( & waktuserver);
    struct tm * waktu = localtime( &waktuserver);
    printf("Tanggal Diakses: %i/%i/%i\n\n", waktu -> tm_mday, waktu -> tm_mon + 1, waktu -> tm_year + 1900);
}

void waktuSimpan() //Fungsi untuk Waktu saat menyimpan data di folder  //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
    time( & waktuserver);
    struct tm * waktu = localtime( &waktuserver);
    fprintf(fPointerz, "Tanggal Diakses: %i/%i/%i\n", waktu -> tm_mday, waktu -> tm_mon + 1, waktu -> tm_year + 1900);
}

void simpan() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
    char format[MAKS];
    printf("Pilih Format File untuk menyimpan data.\n");
    printf("(1) nama_file.txt\n");
    printf("(2) nama_file.doc\n");
    printf("(3) Costume\n");
    printf("Masukan Pilihan: ");scanf("%i", &pilih);
    switch(pilih){
    case 1:
    strcpy(format, ".txt");
    break;
    case 2:
    strcpy(format, ".doc");
    break;
    case 3:
    printf("Masukan Nama Format (contoh: .NamaFormat): ");scanf("%s", &format);
    default:
    system("color 04");printf("ERROR!!!");
    break;
    }

    printf("NAMA FILE  : "); scanf(" %[^\n]s", &nama);
    snprintf(namaFile,sizeof(namaFile),"%s%s",nama,format);
    printf("\nFILE TELAH BERHASIL DISIMPAN DI %s\n", namaFile);
    fPointerz = fopen(namaFile, "w");
    fprintf (fPointerz, "Penjawab Soal  : %s\n", namaUser);
}

int main() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{

system("cls");
printf("                                      TUGAS PEMROGRAMAN KELOMPOK 9 (TUGAS BESAR)            \n");
printf("                                               AYO BELAJAR MATEMATIKA                       \n");
printf("                                           *******************************                  \n\n");
printf("                                                        OLEH :                              \n");
printf("          $=========================================================================================================$\n");
printf("          |   I MADE ANANDA MAHAPUTRA | I Gede Adhi Heryawan Kartika Utama | Matthew Anthony Gede Dharma Saputra    |\n");
printf("          |         (2005551101)      |             (2005551111)           |              (2005551143)              |\n");
printf("          $=========================================================================================================$\n\n");


printf("NAMA PENGGUNA  : "); scanf (" %[^\n]s", &namaUser);
waktu();

do{
system("color  02");
bab:
printf ("<--------------------BAB--------------------> \n");
printf ("(1) Perhitungan Luas\n");
printf ("(2) Perhitungan Volume\n");
printf ("(3) Perhitungan Deret\n");
printf ("(4) Perhitungan Luas Permukaan\n");
printf ("(5) Perhitungan Perhitungan Peta\n");
printf ("(6) Perhitungan 3M (Median, Mean, Modus)\n");
printf ("(7) Perhitungan Konversi\n");
printf ("(8) Perhitungan Himpunan\n");
printf ("(9) Perhitungan Faktorial, Permutasi, Kombinasi\n");
printf ("(10)Perhitungan Bunga\n");
printf ("(11)KELUAR PROGRAM\n");
printf("=================================================");
printf ("\nSILAHKAN MASUKAN KODE SESUAI PILIHAN DIATAS : ");
scanf("%i", &x);
printf("=================================================\n");

 if (x==1){ //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
    ulangiPilihan:
    system("cls");
    system("color  02");
    printf("\n==================\n");
    printf("*PERHITUNGAN LUAS*");
    printf("\n==================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan:
    printf("\n");
    luas();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
        system("cls");
        nilai=0;
   //SOAL LATIHAN//
   /*1*/a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
        printf("\nSOAL LATIHAN PERHITUNGAN LUAS\n\n");
        printf("1.) Sebuah Segitiga dengan panjang %.1fcm dengan tinggi %.1fcm, berapakah luasnya(cm)? ",a,b);
        /*rumus*/ d=(a*b)/2;
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", d);
        printf("\n     c.) %.2fcm", a+12);
        printf("\n     d.) %.2fcm", b+a);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

   /*2*/a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
        printf("\n2.) Sebuah persegi panjang dengan panjang %.1fcm dengan tinggi %.1fcm, berapakah luasnya(cm)? ",a,b);
        /*rumus*/ d=(a*b);
        printf("\n     a.) %.2fcm", d);
        printf("\n     b.) %.2fcm", d+10);
        printf("\n     c.) %.2fcm", a+25);
        printf("\n     d.) %.2fcm", b+a*2);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

   /*3*/a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
        printf("\n3.) Sebuah lingkaran dengan panjang jari-jari %.1fcm, berapakah luasnya(cm)? ",a);
        /*rumus*/ d=(22*a*a)/7;
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", d);
        printf("\n     c.) %.2fcm", a+12);
        printf("\n     d.) %.2fcm", b+a);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B'){printf("     Benar, jawabannya adalah %.3fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

   /*4*/a=rand()%2+20;b=rand()%3+4;c=rand()%4+5;
        printf("\n4.) Sebuah trapesium dengan panjang atas %.1fcm, tinggi %.1fcm dan luas %.1fcm, berapakah panjang bawahnya(cm)? ",b,c,a);
        /*rumus*/ d=((a*2)/c)-b;
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", d*1/2);
        printf("\n     c.) %.2fcm", d);
        printf("\n     d.) %.2fcm", b+a);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='c'||jawabanPilihan=='C'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

   /*5*/a=rand()%2+20;b=rand()%3+4;c=rand()%4+5;
        printf("\n5.) Sebuah layang - layang dengan panjang diagonal 1=%.1fcm dan luas=%.1fcm, berapakah panjang diagonal 2 (cm)? ",c,a);
        /*rumus*/ d=(a*2)/c;
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", d*1/2);
        printf("\n     c.) %.2fcm", d);
        printf("\n     d.) %.2fcm", b+a);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='c'||jawabanPilihan=='C'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}
        printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : LUAS\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Luas anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=5nuY7kgB338\n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
       system("cls");
       printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan;
    }
 }

 else if (x==2){ //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
    ulangiPilihan2:
    system("cls");
    system("color  02");
    printf("\n====================\n");
    printf("*PERHITUNGAN VOLUME*");
    printf("\n====================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan2:
    printf("\n");
    volume();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan2;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan2;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
        system("cls");
        nilai=0;
        a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
        printf("\nSOAL LATIHAN PERHITUNGAN LUAS\n\n");
    //SOAL LATIHAN//
    /*1*/printf("1.) Sebuah Kubus dengan panjang rusuk %.1fcm, berapakah volumenya(cm)? ",a);
        /*rumus*/ d=a*a*a;
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", d);
        printf("\n     c.) %.2fcm", a+12);
        printf("\n     d.) %.2fcm", b+a);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

         a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
    /*2*/printf("\n2.) Sebuah Balok dengan panjang %.1fcm, lebar %.1fcm dan tinggi %.1fcm, berapakah volumenya(cm)? ",a,b,c);
        /*rumus*/ d=a*b*c;
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", a+b+c);
        printf("\n     c.) %.2fcm", a+12);
        printf("\n     d.) %.2fcm", d);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='d'||jawabanPilihan=='D'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

        a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
    /*3*/printf("\n3.) Sebuah krucut dengan panjang jari-jari alas %.1fcm dan tinggi  %.1f, berapakah volumenya(cm)? ",a,c);
        /*rumus*/ d=(22*a*a*c)/(3*7);
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", a+b+c);
        printf("\n     c.) %.2fcm", a+12);
        printf("\n     d.) %.2fcm", d);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='d'||jawabanPilihan=='D'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

        a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
    /*4*/printf("\n4.) Sebuah prisma segitiga dengan panjang alas %.1fcm, tinggi alas %.1fcm dan tinggi %.1fcm, berapakah volumenya(cm)? ",a,b,c);
        /*rumus*/ d=(a*b*c)/2;
        printf("\n     a.) %.2fcm", d);
        printf("\n     b.) %.2fcm", a+b+c);
        printf("\n     c.) %.2fcm", a+12);
        printf("\n     d.) %.2fcm", d);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A'||jawabanPilihan=='d'||jawabanPilihan=='D'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

        a=rand()%2+3;b=rand()%3+4;c=rand()%4+5;
    /*5*/printf("\n5.) Sebuah bola dengan panjang jari-jari %.1fcm, berapakah volumenya(cm)? ",a);
        /*rumus*/ d=(22*a*a*a)/7;
        printf("\n     a.) %.2fcm", d);
        printf("\n     b.) %.2fcm", a+b+c);
        printf("\n     c.) %.2fcm", a);
        printf("\n     d.) %.2fcm", d+d);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A'){printf("     Benar, jawabannya adalah %.2fcm\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}
        printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : VOLUME\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Volume anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=5nuY7kgB338\n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan2;
    }
 }

 else if (x==3){ //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
    ulangiPilihan3:
    system("cls");
    system("color  02");
    printf("\n===================\n");
    printf("*PERHITUNGAN DERET*");
    printf("\n===================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan3:
    printf("\n");
    deret();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan3;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan3;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
        system("cls");
        nilai=0;
        printf("\nSOAL LATIHAN PERHITUNGAN DERET\n\n");
     //SOAL LATIHAN//
    /*1*/printf("1.) Sebuah Deret arimatika memiliki element={1,3,5,7,9,11}, berapakah Jumlah seluruhnya(Sn)?");
        /*rumus*/
        d=3*(2+5*2);
        printf("\n     a.) %.2fcm", d+10);
        printf("\n     b.) %.2fcm", d);
        printf("\n     c.) %.2fcm", a+12);
        printf("\n     d.) %.2fcm", b+a);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B'){printf("     Benar, jawabannya adalah %.0f\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

    /*2*/printf("\n2.) Sebuah Deret arimatika memiliki U1=3 dan U5=15, berapakah Jumlah seluruhnya(Sn)?");
        /*rumus*/
        d=5*(2*3+4*3)/2;
        printf("\n     a.) %.2fcm", d);
        printf("\n     b.) %.2fcm", d+1);
        printf("\n     c.) %.2fcm", d+2);
        printf("\n     d.) %.2fcm", d+3);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A'){printf("     Benar, jawabannya adalah %.0f\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

    /*3*/printf("\n3.) Sebuah Deret Geometri memiliki element={2,4,8,16,...}, berapakah nilai ke-6(U6)?");
        /*rumus*/
        d=2*pow(2,5);
        printf("\n     a.) %.2fcm", d*4);
        printf("\n     b.) %.2fcm", d*3);
        printf("\n     c.) %.2fcm", d*2);
        printf("\n     d.) %.2fcm", d);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='d'||jawabanPilihan=='D'){printf("     Benar, jawabannya adalah %.0f\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

    /*4*/printf("\n4.) Sebuah Deret Geometri memiliki nilai terendah (U1)=2 dan nilai tertinggi (U5)=32, berapakah Jumlah nilai deret Geometri tersebut(Sn)?");
        /*rumus*/
        d=(2*pow(2,5)-1)/(2-1);
        printf("\n     a.) %.2fcm", d+2);
        printf("\n     b.) %.2fcm", d);
        printf("\n     c.) %.2fcm", d-2);
        printf("\n     d.) %.2fcm", d*2);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B'){printf("     Benar, jawabannya adalah %.0f\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

    /*5*/printf("\n5.) Sebuah bola dijatuhkan dari ketinggian 10 meter, setiap kali jatuh, tinggi pantulan berkurang 1/2, tentukan jumlah seluruh lintasan bola sampai bola berhenti?");
        /*rumus*/
        d=10*(2)+5*(2);
        printf("\n     a.) %.2fcm", d/4);
        printf("\n     b.) %.2fcm", d/3);
        printf("\n     c.) %.2fcm", d/2);
        printf("\n     d.) %.2fcm", d);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='d'||jawabanPilihan=='D'){printf("     Benar, jawabannya adalah %.0f meter\n", d);nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}
        printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : DERET\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Deret anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=mp8MU3zeGuA\n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan3;
    }
 }

 else if (x==4){ //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
    ulangiPilihan4:
    system("cls");
    system("color  02");
    printf("\n============================\n");
    printf("*PERHITUNGAN LUAS PERMUKAAN*");
    printf("\n============================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan4:
    printf("\n");
    luaspermukaanruang();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan4;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan4;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
    system("cls");
    nilai=0;
    printf("\nSOAL LATIHAN PERHITUNGAN LUAS PERMUKAAN BANGUN RUANG\n\n");
    //nomor 1//
    printf("1.)  Luas permukaan bola yang berdiameter 21 cm dengan phi=22/7 adalah...cm2.");
    printf("\n     a.) 264");
    printf("\n     b.) 462");
    printf("\n     c.) 1.386");
    printf("\n     d.) 4.851");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='c')
        {printf("Benar, jawabannya adalah 1.386 cm2.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  Sebuah kubus memiliki panjang rusuk 20 cm, luas permukaan kubus adalah...cm2.");
    printf("\n     a.) 180");
    printf("\n     b.) 2.400");
    printf("\n     c.) 10.800");
    printf("\n     d.) 2.700");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 2.400 cm2.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  Sebuah prisma alasnya berbentuk segitiga siku-siku. Jika panjang sisinya 6 cm, 8 cm, serta 10 cm, dan tinggi prisma tersebut adalah 15 cm,");
    printf("\n     maka luas permukaan prisma tersebut...cm2.");
    printf("\n     a.) 398");
    printf("\n     b.) 404");
    printf("\n     c.) 412");
    printf("\n     d.) 408");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 408 cm2.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Sebuah limas dengan alas dan semua sisi tegaknya berbentuk segitiga sama sisi dengan panjang sisinya 8 cm, luas permukaan limas...cm2.");
    printf("\n     a.) 64 akar 3");
    printf("\n     b.) 48 akar 3");
    printf("\n     c.) 16 akar 3");
    printf("\n     d.) 32 akar 3");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 64 akar 3 cm2.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 5//
    printf("\n\n5.)  Sebuah balok dengan panjang 12 cm, lebar 15 cm, tinggi 30 cm, Luas permukaan balok adalah...cm2.");
    printf("\n     a.) 2.035");
    printf("\n     b.) 1.980");
    printf("\n     c.) 1.350");
    printf("\n     d.) 3.000");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 1.980 cm2.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : LUAS PERMUKAAN\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Luas Permukaan anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
        }
        else if (ptv=='V'||ptv=='v'){
            system("cls");
            printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=Ok0QJBXeBx0 \n"); //LINK VIDEO YT
        }
        else if (ptv=='k'||ptv=='K'){
            system("cls");
            printf ("\n"); goto bab;
        }
        else{
            system ("color 04");
            printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
            goto ulangiPilihan4;
        }
    }

 else if (x==5){ //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
    ulangiPilihan5:
    system("cls");
    system("color  02");
    printf("\n==============================\n");
    printf("*PERHITUNGAN PERHITUNGAN PETA*");
    printf("\n==============================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan5:
    printf("\n");
    perhitunganpeta();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan5;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan5;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
        system("cls");
        nilai=0;
         //SOAL LATIHAN//
        printf("\nSOAL LATIHAN PERHITUNGAN PETA\n\n");
    /*1*/printf("1.) Jarak sebenarnya dari Kota A ke Kota B = 5km memiliki sekala 1:100.000, berapakah jarak pada peta?");
        /*rumus*/
        d=500000/100000;
        printf("\n     a.) %.2fcm", d);
        printf("\n     b.) %.2fcm", d+5);
        printf("\n     c.) %.2fcm", d+10);
        printf("\n     d.) %.2fcm", d+20);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A'){printf("     Benar, jawabannya adalah %.0fcm\n", d);nilai+=35;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

    /*2*/printf("2.) Jarak sebenarnya dari Kota A ke Kota B = 5km dan pada peta jaraknya 10cm, berapakah sekalanya?");
        /*rumus*/
        d=500000/10;
        printf("\n     a.) 1:%.0f", d);
        printf("\n     b.) 1:%.0f", d*10);
        printf("\n     c.) 1:%.0f", d*100);
        printf("\n     d.) 1:%.0f", d*1000);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A'){printf("     Benar, jawabannya adalah 1:%.0f\n", d);nilai+=30;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

    /*3*/printf("3.) Jarak pada peta dari Kota A ke Kota B = 14cm dan memiliki sekala 1:5000, berapakah jarak sebenarnya?");
        /*rumus*/
        d=(14*5000)/100000;
        printf("\n     a.) %.2fkm", d+1);
        printf("\n     b.) %.2fkm", d);
        printf("\n     c.) %.2fkm", d*10);
        printf("\n     d.) %.2fkm", d*20+2);
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B'){printf("     Benar, jawabannya adalah %.0fkm\n", d);nilai+=35;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}
        printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : PERHITUNGAN PETA\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Perhitungan Peta anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=AEhPUCvsXCk\n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan5;
    }
 }

 else if (x==6){ //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
    system("cls");
    system("color  02");
    ulangiPilihan6:
    printf("\n=================================\n");
    printf("*PERHITUNGAN MEAN, MEDIAN, MODUS*");
    printf("\n=================================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan6:
    printf("\n");
    tigaM();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan6;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan6;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
    system("cls");
    nilai=0;
    printf("\n\nSOAL LATIHAN PERHITUNGAN MODUS, MEDIAN, DAN MEAN\n\n");
    //nomor 1//
    printf("1.)  Hasil panen kakek selama 5 bulan dalam ton adalah 10, 6, 7, 9, 8. Rata-rata hasil panen kakek tiap bulan adalah...ton.");
    printf("\n     a.) 7");
    printf("\n     b.) 8");
    printf("\n     c.) 9");
    printf("\n     d.) 10");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 8 ton.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  Pelemparan dadu sebanyak 25 kali. Angka yang keluar datanya adalah:");
    printf("\n     1 2 3 4 5 5 6 2 3 4 5 6 6 4 3 2 1 4 3 5 6 6 5 4 5");
    printf("\n     Modus dari data di atas adalah...");
    printf("\n     a.) 3");
    printf("\n     b.) 4");
    printf("\n     c.) 5");
    printf("\n     d.) 6");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='c')
        {printf("Benar, jawabannya adalah 5.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  Hasil ulangan matematika 21 anak kelas VI adalah:");
    printf("\n     7, 8, 9, 8, 7, 8, 10, 9, 5, 7, 9, 9, 8, 7, 10, 8, 9, 6, 8, 7, dan 5.");
    printf("\n     Apabila data tersebut diurutkan dari terkecil hingga terbesar, maka nilai tengah dari data tersebut adalah...");
    printf("\n     a.) 6");
    printf("\n     b.) 7");
    printf("\n     c.) 8");
    printf("\n     d.) 9");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='c')
        {printf("Benar, jawabannya adalah 8.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Data hasil ulangan Bahasa Indonesia Linda sebanyak 4 kali yaitu 10, 8, 9, 6");
    printf("\n     Nilai rata-rata yang diperoleh Linda adalah...");
    printf("\n     a.) 7.50");
    printf("\n     b.) 8.25");
    printf("\n     c.) 8.50");
    printf("\n     d.) 9.25");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 8.25.");}
    else
    {printf("Salah, silahkan pelajari materi lagi.");nilai+=20;}
    //nomor 5//
    printf("\n\n5.)  Ibu membeli gula 8 kg, jagung 10 kg, beras 15 kg, kedelai 12 kg dan kentang 5 kg.");
    printf("\n     Berat rata-rata belanjaan ibu adalah...");
    printf("\n     a.) 7 kg");
    printf("\n     b.) 8 kg");
    printf("\n     c.) 9 kg");
    printf("\n     d.) 10 kg");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 10 kg.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : MEAN,MEDIAN,MODUS\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Mean, Median, Modus anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=McFpva1UDSs /n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan6;
    }
 }

 else if (x==7){ //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
    ulangiPilihan7:
    system("cls");
    system("color  02");
    printf("\n======================\n");
    printf("*PERHITUNGAN KONVERSI*");
    printf("\n======================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan7:
    printf("\n");
    konversi();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan7;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan7;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
    system("cls");
    nilai=0;
    printf("\n\nSOAL LATIHAN PERHITUNGAN KONVERSI SATUAN\n\n");
    //nomor 1//
    printf("1.)  2 km � 1200 m + 3 hm =...m");
    printf("\n     a.) 1.100 m");
    printf("\n     b.) 2.510 m");
    printf("\n     c.) 1.205 m");
    printf("\n     d.) 2.100 m");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 1.100 m.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  50 hm + 3 km � 420 m =...dm");
    printf("\n     a.) 35.400 dm");
    printf("\n     b.) 43.200 dm");
    printf("\n     c.) 54.500 dm");
    printf("\n     d.) 75.800 dm");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 75.800 dm.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  tentukanlah 4 km =...m");
    printf("\n     a.) 40 m");
    printf("\n     b.) 400 m");
    printf("\n     c.) 4.000 m");
    printf("\n     d.) 0.4 m");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 40 m.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Nilai dari 100 m =...cm");
    printf("\n     a.) 10.000 cm");
    printf("\n     b.) 1.000 cm");
    printf("\n     c.) 100 cm");
    printf("\n     d.) 10 cm");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 10.000 cm.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 5//
    printf("\n\n5.)  Nilai dari 5 dam =...dm");
    printf("\n     a.) 50 dm");
    printf("\n     b.) 500 dm");
    printf("\n     c.) 5.000 dm");
    printf("\n     d.) 50.000 dm");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='b')
        {printf("Benar, jawabannya adalah 500 dm.");}
    else
    {printf("Salah, silahkan pelajari materi lagi.");nilai+=20;}
    printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : KONVERSI\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Konversi anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=9Tl5ckImViw \n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan7;
    }
 }

 else if (x==8){ //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
    ulangiPilihan8:
    system("cls");
    system("color  02");
    printf("\n======================\n");
    printf("*PERHITUNGAN HIMPUNAN*");
    printf("\n======================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan8:
    printf("\n");
    himpunan();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan8;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan8;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
        system("cls");
        nilai=0;
        printf("\nSOAL LATIHAN PERHITUNGAN HIMPUNAN\n\n");
    //SOAL LATIHAN//
        for(i=0;i<5;i++){himpunan1[i]=rand()%25+2;}//Himpunn Pertama
        for(j=0;j<5;j++){himpunan2[j]=rand()%25+2;}//Himpunan Kedua
   /*1*/printf("1.) Himpunan Pertama : "); printf("{%i", himpunan1[0]);for(i=1;i<5;i++){printf (", %i",himpunan1[i]);}printf("}");
        printf("\n    Himpunan Kedua   : "); printf("{%i", himpunan2[0]);for(j=1;j<5;j++){printf (", %i",himpunan2[j]);}printf("}");
        printf("\n    Berapakah Gabungan dari kedua Himpunan diatas?");
        /*rumus*/
        M=5;
        N=5;
        for(i=0;i<M;i++){himpunanGabungan[i]=himpunan1[i];}
        for(j=0;j<N;j++)
        {penanda=0;for(i=0;i<M;i++)
            {if (himpunan2[j]== himpunan1[i]){penanda=1;}}
        if (penanda==0){himpunanGabungan[M]=himpunan2[j];M++;}
        }
        printf("\n     a.)"); printf("{%i", himpunanGabungan[0]);for (i=1;i<M;i++){printf (", %i", himpunanGabungan[i]);}printf("}");
        printf("\n     b.){1, 2, 3, 4, 5, 6}");
        printf("\n     c.){1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21}");
        printf("\n     d.){kosong}");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A')
            {printf("     Benar, jawabannya adalah ");
             printf ("%i", himpunanGabungan[0]);
             for (i=1;i<M;i++){printf (", %i", himpunanGabungan[i]);}printf("}");
             nilai+=20;
            }
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

   /*2*/printf("\n\n2.) Himpunan Pertama:{1,2,3,4,5} & Himpunan Kedua:{3,4,5,6,7}, irisan dari kedua Himpunan tersebut adalah?");
        printf("\n     a.){1,2,3}");
        printf("\n     b.){3,4,5}");
        printf("\n     c.){1,2,3,4,5,6,7}");
        printf("\n     d.){kosong}");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B'){printf("     Benar, jawabannya adalah {3,4,5} ");nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

   /*3*/printf("\n\n3.) Himpunan Pertama:{1,2,3,4,5} & Himpunan Kedua:{1,2,3,4,5,6,7}, selisih dari kedua Himpunan tersebut (A-B) adalah?");
        printf("\n     a.){1}");
        printf("\n     b.){1,2}");
        printf("\n     c.){1,2,3}");
        printf("\n     d.){kosong}");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='d'||jawabanPilihan=='D'){printf("     Benar, jawabannya adalah {null/kosong} ");nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

    /*4*/printf("\n\n4.) Himpunan Pertama:{1,2,3,4,5} & Himpunan Kedua:{3,4,5,6,7}, komplemen dari kedua Himpunan tersebut adalah?");
        printf("\n     a.){1,2,3,4,5,6,7}");
        printf("\n     b.){3,4,5}");
        printf("\n     c.){1,2,6,7}");
        printf("\n     d.){kosong}");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='c'||jawabanPilihan=='C'){printf("     Benar, jawabannya adalah {3,4,5} ");nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}

   /*5*/printf("\n\n5.) Himpunan Pertama:{a,b,c,d} & Himpunan Kedua:{1,2,3,4}, gabungan dari kedua Himpunan tersebut adalah?");
        printf("\n     a.){1,2,3,4,a,b,c,d}");
        printf("\n     b.){1a,2b,3c,4d}");
        printf("\n     c.){a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4}");
        printf("\n     d.){kosong}");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a'||jawabanPilihan=='A'){printf("     Benar, jawabannya adalah {a,b,c,d,1,2,3,4}");nilai+=20;}
        else{printf("     Salah, silahkan pelajari materi lagi\n");}
        printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : HIMPUNAN\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Himpunan anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=qFGU4joTvaY \n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan8;
    }
 }

 else if (x==9){ //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
    ulangiPilihan9:
    system("cls");
    system("color  02");
    printf("\n=============================================\n");
    printf("*PERHITUNGAN FAKTORIAL, PERMUTASI, KOMBINASI*");
    printf("\n=============================================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan9:
    printf("\n");
    FPC();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan9;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan9;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
    system("cls");
    nilai=0;
    printf("\n\nSOAL LATIHAN PERHITUNGAN FAKTORIAL, PERMUTASI, DAN KOMBINASI\n\n");
    //nomor 1//
    printf("1.)  Hasil dari 7! adalah...");
    printf("\n     a.) 5.040");
    printf("\n     b.) 3.440");
    printf("\n     c.) 4.240");
    printf("\n     d.) 2.540");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 5.040.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 2//
    printf("\n\n2.)  Seorang satpam bank ingin mencetak nomor antrian nasabah yang terdiri dari tiga angka.");
    printf("\n     Jika nomor antrian tersebut tidak memuat angka yang sama yang dibentuk dari angka 0, 1, 2, 3.");
    printf("\n     Banyak pilihan nomor antrian yang dapat dibuat adalah...");
    printf("\n     a.) 4 cara");
    printf("\n     b.) 12 cara");
    printf("\n     c.) 24 cara");
    printf("\n     d.) 36 cara");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='c')
        {printf("Benar, jawabannya adalah 24 cara.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 3//
    printf("\n\n3.)  Setiap tahun, SMA Pelita Bangsa selalu mengadakan pentas seni. Sebelum acara akbar,");
    printf("\n     para siswa mengadakan pemilihan ketua, sekretaris dan bendahara. Setelah melakukan seleksi,ada 5 orang siswa yang mendaftarkan diri.");
    printf("\n     ada 5 orang siswa yang mendaftarkan diri.");
    printf("\n     Banyak cara untuk memilih ketua, sekretaris dan bendahara untuk acara tersebut adalah...");
    printf("\n     a.) 720 cara");
    printf("\n     b.) 360 cara");
    printf("\n     c.) 120 cara");
    printf("\n     d.) 60 cara");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 60 cara.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 4//
    printf("\n\n4.)  Sebuah kantong berisi 6 kelereng putih, 4 kelereng biru dan 3 kelereng merah.");
    printf("\n     Banyak cara pengambilan 3 kelereng putih dari kantong tersebut adalah...");
    printf("\n     a.) 360 cara");
    printf("\n     b.) 120 cara");
    printf("\n     c.) 60 cara");
    printf("\n     d.) 20 cara");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='d')
        {printf("Benar, jawabannya adalah 20 cara.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    //nomor 5//
    printf("\n\n5.)  Seorang peternak akan membeli hewan ternak untuk dipelihara. Dia akan membeli 3 ekor sapi, 4 ekor domba dan 5 ekor kambing.");
    printf("\n     Seorang pedagang mempunyai 6 ekor sapi, 6 ekor domba dan 8 ekor kambing.");
    printf("\n     Banyak cara yang dapat dilakukan untuk memilih hewan ternak yang akan dibeli adalah...");
    printf("\n     a.) 16.800 cara");
    printf("\n     b.) 9.000 cara");
    printf("\n     c.) 300 cara");
    printf("\n     d.) 120 cara");
    printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
    if (jawabanPilihan=='a')
        {printf("Benar, jawabannya adalah 16.800 cara.");nilai+=20;}
    else
    {printf("Salah, silahkan pelajari materi lagi.");}
    printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : FAKTORIAL, PERMUTASI, KOMBINASI\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Faktorial, Permutasi, Kombinasi anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N'){}
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=DkfK7SItZNI \n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan9;
    }
 }

 else if (x==10){ //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
    ulangiPilihan10:
    system("cls");
    system("color  02");
    printf("\n===================\n");
    printf("*PERHITUNGAN BUNGA*");
     printf("\n===================\n");
    printf("(P) Perhitungan Rumus beserta Penjelasan Singkat\n");
    printf("(T) Soal Latihan\n");
    printf("(V) Video Materi\n");
    printf("(K) KELUAR\n");
    printf("MASUKAN PILIHAN ANDA : ");
    scanf(" %c", &ptv);
    if (ptv=='P'||ptv=='p'){
    ulangiPerhitungan10:
    printf("\n");
    bunga();
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("Kembali ke Perhitungan Rumus? (Ya (Y) or Tidak (N)) = ");
    scanf(" %c", &ulang);
    printf("-----------------------------------------------------\n");
           if (ulang == 'y' ||ulang == 'Y'){goto ulangiPerhitungan10;}
           else if (ulang == 'n' ||ulang == 'N'){goto ulangiPilihan10;}
           else {system("color  04");printf("\nERROR!!!\n");}
    }
    else if (ptv=='T'||ptv=='t'){
        system("cls");
        nilai=0;
        //nomor 1//
        printf("1.)  Ibu menabung di bank, setoran awalnya Rp1.000.000,00 dengan bunga 10 persen/tahun.");
        printf("\n     Berapa total tabungan ibu pada tahun ketiga?");
        printf("\n     a.) 13.000.000");
        printf("\n     b.) 1.300.000");
        printf("\n     c.) 1.030.000");
        printf("\n     d.) 1.003.000");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b'||jawabanPilihan=='B')
            {printf("Benar, jawabannya adalah 1.300.000.");nilai+=20;}
        else
        {printf("Salah, silahkan pelajari materi lagi.");}
        //nomor 2//
        printf("\n\n2.)  Dina menabung di bank, setoran awalnya Rp300.000,00 dengan bunga 5 persen/tahun.");
        printf("\n     Berapakah bunga yang dina peroleh selama 6 bulan?");
        printf("\n     a.) 30.000");
        printf("\n     b.) 15.000");
        printf("\n     c.) 7.500");
        printf("\n     d.) 2.500");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='c')
            {printf("Benar, jawabannya adalah 7.500.");nilai+=20;}
        else
        {printf("Salah, silahkan pelajari materi lagi.");}
        //nomor 3//
        printf("\n\n3.)  Rian menabung di bank sebesar Rp400.000,00 dengan suku bunga tunggal 9 persen/tahun.");
        printf("\n     Tabungan Rian saat diambil sebesar Rp460.000,00.");
        printf("\n     Berapa lama Rian menabung di bank tersebut?");
        printf("\n     a.) 2 tahun");
        printf("\n     b.) 1 tahun 10 bulan");
        printf("\n     c.) 2 tahun 2 bulan");
        printf("\n     d.) 1 tahun 8 bulan");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='d')
            {printf("Benar, jawabannya adalah 1 tahun 8 bulan.");nilai+=20;}
        else
        {printf("Salah, silahkan pelajari materi lagi.");}
        //nomor 4//
        printf("\n\n4.)  Ridwan menabung di bank, dengan bunga 5 persen/tahun.");
        printf("\n     Setelah 6 bulan uang Ridwan bertambah Rp62.500,00.");
        printf("\n     Berapakah setoran awal Ridwan?");
        printf("\n     a.) 2.500.000");
        printf("\n     b.) 625.000");
        printf("\n     c.) 6.250.000");
        printf("\n     d.) 2.000.000");
        printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='a')
            {printf("Benar, jawabannya adalah 2.500.000.");nilai+=20;}
        else
        {printf("Salah, silahkan pelajari materi lagi.");}
        //nomor 5//
        printf("\n\n5.)  Kiki menabung di bank Rp150.000,00 dengan bunga 12 persen/tahun.");
        printf("\n     arena ada kebutuhan keluarga, uang itu diambil seluruhnya dengan bunganya sebesar Rp165.000,00.");
        printf("\n     Berapa lama Kiki menabung?");
        printf("\n     a.) 5 bulan");
        printf("\n     b.) 10 bulan");
        printf("\n     c.) 15 bulan");
        printf("\n     d.) 20 bulan");
            printf("\n     Jawaban: ");scanf(" %c", &jawabanPilihan);
        if (jawabanPilihan=='b')
            {printf("Benar, jawabannya adalah 10 bulan.");nilai+=20;}
        else
        {printf("Salah, silahkan pelajari materi lagi.");}
        printf("\nNilai pada test Perhitungan diatas anda adalah %i/100\n", nilai);
        printf("=====================================================\n");
        printf("Apakah ingin menyimpan data nilai soal diatas? (Y=Ya atau N=Tidak): ");
        scanf(" %c", &YesNo);
        printf("=====================================================\n\n");
        if(YesNo=='y'||YesNo=='Y')
            {
            simpan(namaUser);
            waktuSimpan();
            fprintf(fPointerz,"BAB            : BUNGA\n");
            fprintf(fPointerz,"Nilai pada test Perhitungan Bunga anda adalah %i/100\n\n", nilai);
            fclose (fPointerz);
            }
        else if(YesNo=='n'||YesNo=='N')
        {
            x=x;
        }
        else{system("Color 04");printf("ERROR!!!\n");}
    }
    else if (ptv=='V'||ptv=='v'){
        system("cls");
        printf("\nAkses Link Berikut ini untuk menonton Video Penjelasan Materi : https://www.youtube.com/watch?v=XhssVyYb5fg\n"); //LINK VIDEO YT
    }
    else if (ptv=='k'||ptv=='K'){
        system("cls");
        printf ("\n"); goto bab;
;    }
    else{
        system ("color 04");
        printf("\n ERROR!!! (Silahkan Masukan Pilihan Yang Tepat)\n");
        goto ulangiPilihan8;
    }
 }

 else if (x==11){ //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
     break;
 }

 else {
 system ("color 04");
 printf ("ERROR!!!");
 }

printf("\n");
printf("=====================================================\n");
printf("AKHIRI PROGRAM PROGRAM? (YA (Y) or TIDAK (N)) : ");
scanf(" %c", &ulang);
printf("=====================================================\n\n");
system("cls");
  }
while(ulang == 'n' ||ulang == 'N');
system("cls");
printf ("\n\n\n\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>END<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n");
printf ("\t\t\t\t\t\t    TERIMA KASIH\n");
printf ("\t\t\t\t\t\t    BY KELOMPOK 9\n\n");
printf ("\t\t\t\tsilahkan tekan tanda silang(X) jika ingin keluar (*w*).\n");

while(1){
system ("color 01");
system ("color 02");
system ("color 03");
system ("color 04");
system ("color 05");
system ("color 06");
system ("color 08");
system ("color 09");
}

return 0;
}

