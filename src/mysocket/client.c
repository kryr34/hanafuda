#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>

#include "mysocket.h"


STATUS_CODE socket_conncet(int sock, struct sockaddr_in* serv_addr) {
	// Convert IPv4 and IPv6 addresses from text to binary form
	if (inet_pton(AF_INET, "127.0.0.1", &(serv_addr->sin_addr)) <= 0) {
		printf("Invalid address/ Address not supported");
		return INVALID_ADDRESS;
	}
	if (connect(sock, (struct sockaddr*)serv_addr, sizeof(*serv_addr)) < 0) {
		printf("Connection Failed");
		return CONNETION_FAILED;
	}
}
