 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <unistd.h>
 #include <pthread.h>
 #include <signal.h>
    void *hola(void *arg){
    char *msg="Hola";
    
    for(int i=0; i<strleng(msg); i++){
    printf("%c",msg[i]);
    fflush(stdout);
    usleep(10000)
}
    
return NULL;
}
 
void mundo(void *arg){
    char *msg ="mundo"
    
    for(int i=0; i <strleng(msg); i    printf("%c",msg[i]);
    fflush(stdout);
    usleep(10000);
}
return NULL;

}
int main (int argc , char *argv[]){
    
    pthread_t h1;
    pthread_t h2;

    
    pthread_create( &h1, NULL, hola, NULL);

    pthread_create(&h2, NULL, mundo, NULL);
    printf("fin  \n");
    
return 0;
}
