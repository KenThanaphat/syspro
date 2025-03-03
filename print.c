#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n=atoi(argv[2]);
  for(int i=0;i<n;i++){
    printf("%s",argv[1]);
  }
}

pthread_attr_t attr;
pthread_attr_init(&attr);
pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);
pthread_create(&Thread,&attr,function,NULL);
pthread_attr_destroy(&attr);