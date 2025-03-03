#include <stdio.h>
#include <unistd.h>

int main(){
  int pid=fork();

  if(pid>0){
    printf("Parent Process");
    execl("./print","print","Phan","123",NULL);
  } else
    if(pid==0){
      printf("Child Process");
      char *arg[]={"print","Da","321",NULL};
      execv("./print",arg);
    }
}
