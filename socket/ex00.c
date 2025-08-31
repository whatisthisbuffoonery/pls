#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int	main(int c, char **v)
{
	struct	addrinfo hints, *res, *read;
	int		sockfd = -1;
	int		status = 1;

	res = 0;
	if (c == 2)
		status = getaddrinfo(v[1], NULL, &hints, &res);
	if (status)
		return (1);
	read = res;
	while (read && s == -1)//ex00
	{
		sockfd = socket(read->ai_family, read->ai_socktype, read->ai_protocol);
		read = read->ai_next;
	}

//---------------------------------------------------------------------------------------------

	//bind(sockfd, read->ai_addr, read->ai_addrlen);

	freeaddrinfo(res);
}
