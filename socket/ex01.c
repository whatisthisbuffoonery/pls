#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int	main(void)
{
	struct addrinfo	hints, *res, *read;
	int				status = -1, sockfd = -1, yes = 1;

	memset(&hints, 0, sizeof(hints));
	hints.ai_flags = AI_PASSIVE;
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;

	status = getaddrinfo(NULL, "8000", &hints, &res);
	if (status)
		return (1);

	read = res;
	while (read && sockfd == -1)
	{
		sockfd = socket(read->ai_family, read->ai_socktype, read->ai_protocol);
		if (sockfd == -1)
			read = read->ai_next;
	}
	if (sockfd != -1)
	{
		setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes));//ex01
		bind(sockfd, read->ai_addr, read->ai_addrlen);
	}


//-----------------------------------------------------------------------------------------------------------


	listen(sockfd, 10);
	close(sockfd);
	freeaddrinfo(res);
}
