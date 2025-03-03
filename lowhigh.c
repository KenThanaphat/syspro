#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int fd = open("low.txt",RDWR);
write(fd,"Hello",5);
lseek(fd,0,SEEK_SET); // Set back to first position

char buf[20];
read(fd,buf,3);

printf("%s",buf);
close(fd);

FILE *fd = fopen("high.txt",'a+');
fwrite("Hello",sizeof(char),5,fd);
fseek(fd,0,SEEK_SET);
