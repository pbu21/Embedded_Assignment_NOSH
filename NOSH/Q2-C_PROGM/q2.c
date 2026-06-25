#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<time.h>
  
unsigned char buff[1000];
int count=0;
  
pthread_mutex_t mutex;
 
 
void* sensor_thread(void *arg)
{
while(1)
{
sleep(1);
 
int n=rand()%6;
 
pthread_mutex_lock(&mutex);
 
for(int i=0;i<n;i++)
 {
 if(count<1000)
 {
 buff[count++]=rand()%256;
 }
 }
 printf("sensor genrate %d of data (total=%d)\n",n,count);
 
 
 pthread_mutex_unlock(&mutex);
 }
 return NULL;
 }
 
 int main()
 {
 srand(time(0));
 
 pthread_mutex_init(&mutex,NULL);
 
 pthread_t tid;
 
 pthread_create(&tid,NULL,sensor_thread,NULL);
 
 while(1)
 {
 sleep(10);
 pthread_mutex_lock(&mutex);
 
 if(count>=50)
 {
 printf("the 50 bytes are:-\n");
 int st=count-50;
 for(int i=st;i<count;i++)
 printf("%02X ",buff[i]);

 printf("\n");
 count=count-50;
 }
 else
 {
 printf("\n Only %d bytes available\n",count);
 }
 pthread_mutex_unlock(&mutex);
 }
 pthread_join(tid,NULL);
 
 pthread_mutex_destroy(&mutex);
 
 return 0;
 }