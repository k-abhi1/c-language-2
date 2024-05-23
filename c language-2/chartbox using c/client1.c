#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include <arpa/inet.h> 



int main(int argc, char *argv[])
{
    int sockfd = 0, n1 = 0;
   struct sockaddr_in serv_addr;
char data[50];
char recieved[50]; 





    memset((void*)recieved, 0, sizeof(recieved));
printf("\nWELCOME TO CHAT SERVER BY PRANAV\n");

    if(argc != 2)
    {
        printf("\n Usage: %s <ip of server> \n",argv[0]);
        return 1;
    } 

   
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Error : Could not create socket \n");
        return 1;
    } 

    memset(&serv_addr, '0', sizeof(serv_addr)); 

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(5000); 

    if(inet_pton(AF_INET, argv[1], &serv_addr.sin_addr)<=0)
    {
        printf("\n inet_pton error occured\n");
        return 1;
    } 

    if( connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
       printf("\n Error : Connect Failed \n");
       return 1;
    }

   
while(1)
{
     
     
printf("\n you:");
     gets(data);
    send(sockfd, data, sizeof(data), 0); 
    recv(sockfd, recieved, sizeof(recieved), 0);
    
    printf("\n he/she:");
    puts(recieved);
}


return 0; 
}


