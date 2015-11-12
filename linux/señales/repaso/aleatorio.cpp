#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main (int argc, char *arg[]){

    FILE *fichero;
    
    srand(time(NULL));
    fichero= fopen("numero", "w");
    fprintf(fichero,"%i\n",rand());
    fclose(fichero);

return 0;
}


