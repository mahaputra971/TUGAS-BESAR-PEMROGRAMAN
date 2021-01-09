#include <stdlib.h>
#include <stdio.h>


void login(char username[20], int password)
{
char un[20];
int pw, b;

printf("\n");
printf("=====================================================\n");
printf("|                      Menu Login                   |\n");
printf("=====================================================\n");
printf("\nSilahkan masukan username anda = ");
scanf("%s", &un);
if((strcmp(un,username)==0)){
    printf("Masukan PIN anda= ");
    scanf("%d", &pw);
    if(pw!=password){
        printf("PIN anda salah\n");
        login(username, password);

    }
    else{
        printf("SELAMAT DATANG %s!\n", un);
    }
}
else{
    printf("\nUsername anda tidak terdaftar\n");
    printf("Apakah anda sudah mendaftar? Jika belum anda dapat menuju menu pendaftaran.\n");
    printf("1. Pergi ke menu pendaftaran\n");
    printf("2. Tetap di menu login\n");
    printf("\nPilihan anda: ");
    scanf ("%d", &b);
    if (b==1){
        regist();
    }
    else if (b==2){
        login(username, password);
    }
}
}

void regist(){
char username[20];
int password;

printf("\n");
printf("=====================================================\n");
printf("                    Menu Pendaftaran                |\n");
printf("=====================================================\n");
printf("\nMasukan username = ");
scanf("%s", &username);
printf("Masukan PIN = ");
scanf("%d", &password);
printf("Registrasi selesai...\n");
login(username, password);
}

int main(){
char username[20];
int a, password;
printf("Selamat datang di Program Pembelajaran!\n");
printf("Apakah anda sudah memiliki akun?\n");
printf("1. Ya dan lanjutkan ke login\n");
printf("2. Belum dan ingin mendaftar\n");
printf("\nPilihan anda: ");
scanf("%d", &a);
if (a==1){
    login(username, password);
}
else if(a==2){
    regist();
}
}
