#include <stdio.h>
#include <stdlib.h>


int main(){
    char str[8] = {"Ricardo"};
    char copia[8];
    int j = 0;

    printf("String natural: %s\n", str);
    //invertendo a string em uma variável
    for(int i=7; i>=0; i--){
        if(str[i] != '\0'){
            copia[j] = str[i];
            j += 1;
        }
    }
    //alterando os valores da string para sua cópia
    for(int i=0; i<8; i++){
        str[i] = copia [i];
    }

    printf("String natural invertida: %s\n", str);
    
    return 0;
}