#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

void aleatorio(int numero){
    srand (time(NULL));
}

int main (int argc, char* argv[]){

    FILE *fichero;
    fichero= fopen("archivo.txt","w");
    if (fichero==NULL){
    perror("No se puede abrir archivo");    
}

    pid_t child_pid;
    child_pid=fork();
    printf("Numero aleatorio:%d\n",rand());
    return 0;
}
