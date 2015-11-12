#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (){

    pid_t child_pid;

    printf("The main program process ID is %d\n",(int) getpid());
    child_pid = fork();
    if (child_pid !=0){
        printf("This is the parent process, with ID %d\n", (int)getpid ());
    }
    else
        printf("this is the child process, with ID %d\n", (int) getpid());

    return 0;
}

