#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <stdlib.h>

int main(){
  int pid=fork();

  if(pid>0){
    printf("Parent Process");
    wait(NULL);
  } else
    if(pid==0){
      while(1){
      printf("Child Process");
        sleep(1);
      }
    } else perror("Fork Failed");
}