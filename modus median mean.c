#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

    //median
    void tengah(){
    int n,a,b,temp=0,q1,q2;
    float median;

    //input jumlah data
    printf("masukkan jumlah data: "); scanf("%d",&n);fflush(stdin);

    //input data
    int data[n],frekuensi[n],modus,max=-1000,sum=0;
    float mean;

    for(a=0;a<n;a++){
                     printf("masukkan data ke-%d <0..9>: ",a+1);scanf("%d",&data[a]);
                     sum=sum+data[a];
                     }
    for(a=0;a<(n-1);a++){
                         for(b=a;b<n;b++){
                         if(data[b]<data[a]){
                                               temp=data[a];
                                               data[a]=data[b];
                                               data[b]=temp; };
                                               };
                                               }
    printf("\ndata setelah diurutkan: ");
    for(a=0;a<n;a++){
                     printf("%d,",data[a]);}
                     printf("\n\n");
    if(n%2==1){q2=(n/2);
                        median=data[q2];
                        printf("\nmedian adalah: %.2f",median);}
    else if(n%2==0){q1=(n/2)-1; q2=(n/2);
                    median=((float)data[q1]+(float)data[q2])/2;
                    printf("\nmedian adalah: %.2f",median);}

    printf("\n");
    }

    //mencari rata-rata
    void rata(){
         int n,a,b,temp=0,q1,q2;
    float median;

    //input jumlah data
    printf("masukkan jumlah data: "); scanf("%d",&n);fflush(stdin);

    //input data
    int data[n],frekuensi[n],modus,max=-1000,sum=0;
    float mean;

    for(a=0;a<n;a++){
                     printf("masukkan data ke-%d <0..9>: ",a+1);scanf("%d",&data[a]);
                     sum=sum+data[a];
                     }
    for(a=0;a<(n-1);a++){
                         for(b=a;b<n;b++){
                         if(data[b]<data[a]){
                                               temp=data[a];
                                               data[a]=data[b];
                                               data[b]=temp; };
                                               };
                                               }
    printf("\ndata setelah diurutkan: ");
    for(a=0;a<n;a++){
                     printf("%d,",data[a]);}
                     printf("\n\n");
    mean=(float)sum/n;
    printf("\nmean adalah: %.2f\n",mean);
    }
    //mencari modus
    void banyak(){
         int n,a,b,temp=0,q1,q2;
    float median;

    //input jumlah data
    printf("masukkan jumlah data: "); scanf("%d",&n);fflush(stdin);

    //input data
    int data[n],frekuensi[n],modus,max=-1000,sum=0;
    float mean;

    for(a=0;a<n;a++){
                     printf("masukkan data ke-%d <0..9>: ",a+1);scanf("%d",&data[a]);
                     sum=sum+data[a];
                     }
    for(a=0;a<(n-1);a++){
                         for(b=a;b<n;b++){
                         if(data[b]<data[a]){
                                               temp=data[a];
                                               data[a]=data[b];
                                               data[b]=temp; };
                                               };
                                               }
    printf("\ndata setelah diurutkan: ");
    for(a=0;a<n;a++){
                     printf("%d,",data[a]);}
                     printf("\n\n");

    for(a=0;a<10;a++){frekuensi[a]=0;
                      for(b=0;b<n;b++){
                                       if(data[b]==a){frekuensi[a]=frekuensi[a]+1;};
                                       }
                      if(frekuensi[a]>max) {max=frekuensi[a];modus=a;}
                      };
                          printf("\nmodus adalah: %d\n",modus);
    }

    //keluar
    void keluar()
    {
    printf("\nTerimakasih \n");
    }


    //main menu
int main()
{
int pilih;
char ulang;
do
{
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
case 1 : tengah();
break;
case 2 : rata();
break;
case 3 : banyak();
break;
case 4 : keluar();
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
