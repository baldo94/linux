#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>

sig_atomic_t finished=0;

void kaput(int sigum){
    finished=1;
}

void spawn(const char *command, const char *parameter){
    pid_t child=fork();
    execl(command, command, pameter)
}

int main(int argc, char **argv) {


return 0;}
