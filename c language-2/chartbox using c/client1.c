#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<arpa/inet.h>

int main(int argc,char *argv[]){
    int scokfd =0,n1=0;
    struct sockaddr_in serv_addr;
    char data[50];
    char recived[50];
    memset((void*)recived,0,sizeof(recived));
    printf("\n welcome to chart server\n");

    if(argc !=2){
        printf("\n usage: %s <ip of server>\n",argv[0]);
        return 1;
    }
    if((sockfd = socket(AF_INET,SOCK_STREAM,0))<0){
        printf("\n error: could not create socket\n");
        return 1;
    }
    memset((void*)&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(5000);
    if(inet_pton(AF_INET,argv[1],&serv_addr.sin_addr)<=0){
        printf("\n inet_pton error occured\n");
        return 1;
    }
    if(connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0){
        printf("\n error: connect failed\n");
        return 1;
    }
    while(1){
        printf("\n enter data to send to server: ");
        fgets(data,50,stdin);
        send(sockfd,data,strlen(data),0);
        n1 = recv(sockfd,recived,50,0);
        recived[n1] = '\0';
        printf("\n data recived from server: %s\n",recived);
    }
    close(sockfd);
    return 0;
}