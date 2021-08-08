#include <bits/stdc++.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

void error(const char *msg){
    perror(msg);
    exit(1);
}

int main(int argc, char *argv[]){
    int sockfd, newsocktfd, portno;
    __socklen_t clilen;
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    int n;

    if(argc < 2){
        fprintf(stderr, "Error, no port provided\n");
        exit(1);
    }
    //create a socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
        error("Error opening socket");
    
    //clear address structure
    bzero((char *) &serv;_addr, sizeof(serv_addr));
}