#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <stdlib.h>

int main(){
  int pid=fork();

  if(pid>0){
    while(1);
    printf("Parent Process");
  } else
    if(pid==0){
      printf("Child Process");
      exit(0);
    } else perror("Fork Failed");
}