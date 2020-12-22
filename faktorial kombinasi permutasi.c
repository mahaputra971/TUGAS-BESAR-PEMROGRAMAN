#include <stdio.h>

long int faktorial(int N);

main()
{
long int f;
int n;
printf("=====================================================\n");
printf("|              Program Menghitung Faktorial         |\n");
printf("=====================================================\n");
printf("Masukkan suatu bilangan bulat : ");
scanf("%d",&n);
if (n<0)
{
printf("Bilangan harus positif!");
} else {
f = faktorial(n);
printf("\n");
printf("Nilai %d! adalah : %ld \n\n", n, f);
}

{
long int hasil;
int n,r;
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
printf("Nilai n tidak boleh lebih kecil dari r");
} else {
hasil = faktorial(n)/(faktorial(r) * faktorial(n-r));
printf("\n");
printf("%dC%d = %ld \n\n",n,r,hasil);
}
}

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
}

long int faktorial(int N)
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
