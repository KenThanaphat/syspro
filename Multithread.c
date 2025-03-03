#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

typedef struct{
  int count;
  char *word;
}threadData;

void *printChar (void *arg){
  threadData *data = (threadData*)arg;

  for(int i=0;i<data->count;i++){
    printf("%s",data->word);
  }
  return NULL;
}

int main(){
  pthread_t Thread[3];
  threadData Data[3];

  Data[0].word = "A";
  Data[0].count = 100;
  Data[1].word = "B";
  Data[1].count = 200;
  Data[2].word = "C";
  Data[2].count = 300;

  for(int i=0;i<3;i++){
    pthread_create(&Thread[i],NULL,printChar,&Data[i]);
  }

  for(int i=0;i<3;i++){
    pthread_join(Thread[i],NULL);
  }
}