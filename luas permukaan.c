#include <stdio.h>
#define phi 3.14

void luaspermukaanbalok()
{
int p, t, l, luaspermukaan;
printf("\n");
printf("=====================================================\n");
printf("|            Hitung Luas Permukaan Balok            |\n");
printf("=====================================================\n");
printf("Input Panjang (cm) : ");
scanf("%d",&p);
printf("Input Tinggi (cm) : ");
scanf("%d",&t);
printf("Input Lebar (cm) : ");
scanf("%d",&l);
luaspermukaan=(2*(p*l))+(2*(p*t))+(2*(l*t));
printf("2(Panjang x Lebar) + 2(Panjang x Tinggi) + 2(Lebar x Tinggi) \n");
printf("Luas Permukaan Balok : %d \n",luaspermukaan);
}

void luaspermukaanlimassegitigasamasisi()
{
int a, x, u, luaspermukaan;
printf("\n");
printf("=====================================================\n");
printf("|   Hitung Luas Permukaan Limas Segitiga Sama Sisi  |\n");
printf("=====================================================\n");
printf("Input Alas Segitiga Alas (cm) : ");
scanf("%d",&a);
printf("Input Tinggi Segitiga Alas (cm) : ");
scanf("%d",&x);
printf("Input Tinggi Limas (cm) : ");
scanf("%d",&u);
luaspermukaan =((a*x)/2)*u*3/2;
printf("3/2 Alas x Tinggi \n");
printf("Luas Permukaan Limas Segitiga Sama Sisi : %d \n",luaspermukaan);
}

void luaspermukaanprismasegitiga()
{
int a, x, v, luaspermukaan;
printf("\n");
printf("=====================================================\n");
printf("|       Hitung Luas Permukaan Prisma Segitiga       |\n");
printf("=====================================================\n");
printf("Input Alas Segitiga Alas (cm) : ");
scanf("%d",&a);
printf("Input Tinggi Segitiga Alas (cm) : ");
scanf("%d",&x);
printf("Input Tinggi Prisma (cm) : ");
scanf("%d",&v);
luaspermukaan =((a*x)/2)*v;
printf("Luas Alas x Tinggi \n");
printf("Luas Permukaan Prisma Segitiga : %d \n", luaspermukaan);
}

void luaspermukaankubus()
{
int s, luaspermukaan;
printf("\n");
printf("=====================================================\n");
printf("|             Hitung Luas Permukaan Kubus           |\n");
printf("=====================================================\n");
printf("Input Sisi Kubus (cm) : ");
scanf("%d",&s);
luaspermukaan =6*s*s;
printf("6 x Sisi x Sisi \n");
printf("Luas Permukaan Kubus: %d \n", luaspermukaan);
}

void luaspermukaanbola()
{
int r, luaspermukaan;
printf("\n");
printf("=====================================================\n");
printf("|              Hitung Luas Permukaan Bola           |\n");
printf("=====================================================\n");
printf(" Input Jari-Jari (cm) : ");
scanf("%d",&r);
luaspermukaan =4*phi*(r*r);
printf("4 x Phi x (Jari-Jari x Jari-Jari) \n");
printf(" Luas Permukaan Bola : %d \n",luaspermukaan);
}

void keluar()
{
printf("Terimakasih \n");
}

//Program Utama
int main()
{
int pilih;
char ulang;
do
{
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
case 1 : luaspermukaanbalok();
break;
case 2 : luaspermukaanlimassegitigasamasisi();
break;
case 3 : luaspermukaanprismasegitiga();
break;
case 4 : luaspermukaankubus();
break;
case 5 : luaspermukaanbola();
break;
case 6 : keluar();
break;
default : printf("Pilihan Anda Salah!\n");
}
printf("\n");
printf("=====================================================\n");
printf("Kembali ke Menu Utama ? (Y/N) : ");
scanf(" %c", &ulang);
printf("=====================================================\n");
}
while(ulang == 'y' ||ulang == 'Y');
}
