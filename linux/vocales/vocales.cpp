#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){ 

    char texto[50];
    int pausa=0;
    int a=0,e=0,i=0,o=0,u=0;

    printf("Introduce las palabras y termina con un +\n");
    scanf("%c",&texto[pausa]);
    while (texto[pausa]!='+'){
        scanf("%c",&texto[++pausa]);
    }
    pausa=0; a=0; e=0; i=0; u=0;
    while(texto[pausa] != '+'){
        if (texto[pausa]=='a')
            a++;
        if (texto[pausa]=='e')
            e++;
        if(texto[pausa]=='i')
            i++;
        if(texto[pausa]=='o')
            i++;
        if(texto[pausa]=='u'){
            a++;}
        pausa++;
    }
    printf("El numero de a es: %d\n ",a);   
  printf("El numero de e es: %d\n ",e);   
  printf("El numero de i es: %d\n ",i);   
  printf("El numero de o es: %d\n ",o);   
  printf("El numero de u es: %d\n ",u);   


    return 0;}

