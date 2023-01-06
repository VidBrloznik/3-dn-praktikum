#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
int main() {
    int prav=0;
    int zivljenj=10;
    char crka;
    char besede[5][5]={"besed","kebab","smrkc"}; //možnosti besed
    char ugani[]={'_','_','_','_','_'};
    int a;
    printf("Vpisi stevilo med 1 in 3: ");
    scanf("%i",&a);  //izbira besede
    do{ //loop za uganjanje črk
        int p=0;
        printf("vpisi crko: "); //vpis črke 
        scanf("%s" , &crka);
        printf("\n");
        for(int j=0;j<5;j++){
            if(crka==besede[a-1][j]){ //primerjava vpisane črke z besedo
                ugani[j]=crka;
                p++;   //pregled pravilnih znakov in števec za odpis življenja
                prav++;
            }
        }
        for(int i=0;i<5;i++){   //izpiše _ , _ ,... z uganjenimi črkami
            printf("%c" , ugani[i]);
         if(i!=4){
         printf(" , ");
         }
        }
        printf("\n");
            zivljenj--;
        printf("imate se %i pojskusov \n",zivljenj);
        
    }
    while(zivljenj>0 || prav==5); //pogoji za konec ugotavljanja
    
    if(zivljenj==0){   //izpis zmage/poraza
        printf("PORAZ");
    }
    else{
        printf("ZMAGA");
    }
    return 0;
}