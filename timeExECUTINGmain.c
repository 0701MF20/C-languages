#include <stdio.h>
#include <stdlib.h>
#include<time.h>//for time
#include<unistd.h>//for sleep

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	time_t START=time(NULL);
 	sleep(3);
 	time_t END=time(NULL);
 	printf("Time is:%d",END-START);
	return 0;
}
