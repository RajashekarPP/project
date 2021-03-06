
#define debug 0		// 0 indicates no debugging 1 to start debbuging

#define SIZE 1000       // defining the size of the buffer in bytes

void calculatespeed(double , long , const char *);
void printdebug(char *);


#include<semaphore.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<sys/stat.h>
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/resource.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<time.h>
#include<sys/wait.h>
#include<dirent.h>
#include<signal.h>
#include<sys/ipc.h>
#include<sys/msg.h>
