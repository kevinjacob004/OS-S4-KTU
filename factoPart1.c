#include <stdio.h>
#include <unistd.h>
#include <sys/shm.h>
#include <string.h>
#include <stdlib.h>
int i;
void *shared_mmy;
char buff[100];
void main(){
	int shmid;
	shmid=shmget(1115,1024,0666|IPC_CREAT);
	shared_mmy=shmat(shmid,NULL,0);
	printf("Shared mmy is %d\n",shmid);
	printf("Enter number:");
	gets(buff);
	strcpy(shared_mmy,buff);
	printf("The number is : %s",(char *)shared_mmy);
}

