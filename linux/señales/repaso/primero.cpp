#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[]){
    FILE *dcm;
    
    srand(time(NULL));
    dcm=fopen("numero","w");
    fprintf(dcm,"%i\n",rand());
    fclose(dcm);

return 0;
}
