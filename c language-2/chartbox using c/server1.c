#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<syd/types.h>


int main(int argc, char *argv[]){
    int listendfd = 0, connfd = 0;
    struct sockaddr_in serv_addr;

    char data[50];
    char senddata[50];
    memset((void*)recived,0,sizeof(recived));
    time_t ticks;
    printf("\n welcome to chart server\n");

    listendfd = socket(AF_INET,SOCK_STREAM,0);
    memset((void*)&serv_addr,0,sizeof(serv_addr));


    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(5000);

    bind(listendfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    listen(listendfd,10);

    connfd = accept(listendfd,(struct sockaddr*)NULL,NULL);

    while(1){
       recv(connfd,recived,sizeof(recived),0);
       printf("\n he/she :");
       puts(recived);
         printf("\n you :");
         gets(data);
         send(connfd,data,sizeof(data),0);
      
    }

}