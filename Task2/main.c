#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
int main() {
//osnovne deklaracije
    int zivljenj=10;
    char crka;
    char besede[5][5]={"besed","kebab","smrkc"};
    char ugani[]={'_','_','_','_','_'};
    int a;
    printf("Vpisi stevilo med 1 in 3: ");
    scanf("%i",&a);  //izbira besede
    for(int i=0;i<5;i++){ //loop za uganjanje črk
        int p=0;
        printf("vpisi crko: ");
        scanf("%s" , &crka);
        printf("\n");
        for(int j=0;j<5;j++){   //loop ki gleda pravilen vpis in zamenja _ z črkoe 
            if(crka==besede[a-1][j]){
                ugani[j]=crka;
            }
        }
        for(int i=0;i<5;i++){  //izpiše _ , _ ,... z uganjenimi črkami
            printf("%c" , ugani[i]);
         if(i!=4){
         printf(" , ");
         }
        }
        printf("\n");
        
    }
    
    return 0;
}