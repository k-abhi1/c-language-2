#include <sys/socket.h>
#include <netinet/in.h>     ///define the sockaddr_in structure
#include <arpa/inet.h>      ///define htons(), htonl()
#include <stdio.h>
#include <stdlib.h>      ///define  NULL 	 	


   
#include <string.h>
#include <sys/types.h>


int main(int argc, char *argv[])
{
    int listenfd = 0, connfd = 0;
    struct sockaddr_in serv_addr; 

     
char data[50];
char recieved[50];

    memset((void*)recieved, 0, sizeof(recieved));
    time_t ticks; 
     printf("\nWELCOME TO CHAT SERVER BY PRANAV\n");

    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    memset(&serv_addr, '0', sizeof(serv_addr));
     

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(5000); 

    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

    listen(listenfd, 10); 
    



        connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
 

     while(1)
{
   
    recv(connfd, recieved, sizeof(recieved), 0);
printf("\n he/she:");
puts(recieved);
printf("\n you:");
gets(data);
   send(connfd, data, sizeof(data), 0); 
    
   
        
 }       
        close(connfd);
        sleep(1);
return 0;
     





}


