#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <stdlib.h>

int main(){
  int pid=fork();

  if(pid>0){
    printf("Parent Process");
    execl("./print","print","Parent","123",NULL);
    
  } else
    if(pid==0){
      printf("Child Process");
      char *arg[]={"print","Child","321",NULL};
      execv("./print",arg);
    } else perror("Fork Failed");
}