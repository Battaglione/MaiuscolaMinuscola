#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define DIM 10

int main(){
    char stringa[DIM + 1];
    int x, y;
    
    for(x = 0; x < DIM; x++){
        printf("Inserisci il tuo nome carattere per carattere: ");
        fflush(stdin);
        scanf("%s",&stringa[x]);  
    }  

    for(x = 0; x < DIM; x = x + 2){
        stringa[x] = toupper(stringa[x]);
    }   

    for(x = 1; x < DIM; x = x + 2){
        stringa[x] = tolower(stringa[x]);
    }


     printf("%s \n", stringa);

}
