typedef enum {
	CONNETION_FAILED,
	INVALID_ADDRESS,
} STATUS_CODE;

int socket_create();
STATUS_CODE socket_conncet(int sock, struct sockaddr_in* serv_addr);
void socket_bind(int server_fd, struct sockaddr_in* serv_addr);
void socket_listen(int server_fd, int new_socket, struct sockaddr_in* serv_addr);

