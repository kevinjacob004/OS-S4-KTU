#include <stdio.h>
#include <unistd.h>
#include <sys/shm.h>
#include <string.h>
#include <stdlib.h>
int i;
void *shared_mmy;
char buff[100];
void main(){
	int shmid,fact=1,i;
	shmid=shmget(1115,1024,0666);
	shared_mmy=shmat(shmid,NULL,0);
	printf("Shared mmy is %d\n",shmid);
	printf("The number is : %s",(char *)shared_mmy);
	int n=atoi((char *)shared_mmy);
	printf("\nn = %d\n",n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("%d is the factorial\n",fact);
}
	
