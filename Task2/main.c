#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL)); //števec za čas da na 0
    int prav=0;
    char crka;
    char besede[5][50]={"besede","kebab","smrketa","lolek","bob"};  //možnosti besed sedaj različno dolge
    char ugani[50];
    int a=(rand()%5); //random izbor besede
    int dolzina;
    dolzina=strlen(besede[a-1]);
    int zivljenj=dolzina+5;
    for(int i=0;i<dolzina;i++){ //nastavitev pravilnega števila _.
        ugani[i]='_';
    }
    for(int i=0;i<dolzina;i++){  //loop za izpis _ , _ , _
            printf("%c" , ugani[i]);
         if(i!=dolzina-1){
         printf(" , ");
         }
        }
        printf("\n");
    do{
        int p=0;
        printf("vpisi crko: "); //loop za vpis črke
        scanf(" %c" , &crka);
        fflush(stdin);
        printf("\n");
        for(int j=0;j<dolzina;j++){
            if(crka==besede[a-1][j]&&ugani[j]=='_'){  //primerjava vpisane črke z besedo
                ugani[j]=crka;
                p++;  //pregled pravilnih znakov in števec za odpis življenja
                prav++;
            }
        }
        for(int i=0;i<dolzina;i++){ 
            printf("%c" , ugani[i]);
         if(i!=dolzina-1){
         printf(" , ");
         }
        }
        printf("\n");  
        if(p==0){ //odšteje življenje ob napačne pojskusu
        zivljenj--;
        }
        printf("imate se %i pojskusov \n",zivljenj);
    if(prav==dolzina){ //pregleda če so vse črke ugotovljene
        printf("ZMAGA");
        return 0;
    }

    }
    while(zivljenj>0);
    
    if(zivljenj==0){
        printf("PORAZ\n");
    }
    printf("Beseda je bila: ");
    for(int i=0;i<dolzina;i++){  //loop za izpispravilnega odgovora
            printf("%c" , besede[a-1][i]);
        }
    return 0;
}