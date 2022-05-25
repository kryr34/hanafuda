#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>

#include "mysocket.h"


void socket_bind(int server_fd, struct sockaddr_in* serv_addr) {
	if (bind(server_fd, (struct sockaddr*)serv_addr, sizeof(*serv_addr)) < 0) {
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
}

void socket_listen(int server_fd, int new_socket, struct sockaddr_in* serv_addr) {
	int addrlen = sizeof(*serv_addr);
	if (listen(server_fd, 3) < 0) {
		perror("listen");
		exit(EXIT_FAILURE);
	}
	if ((new_socket = accept(server_fd, (struct sockaddr*)serv_addr, (socklen_t*)&addrlen)) < 0) {
		perror("accept");
		exit(EXIT_FAILURE);
	}
}
