#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int	main(int c, char **v)
{
	struct addrinfo		*res = 0;
	struct addrinfo		*read;
	struct addrinfo		init;
	void				*addr_dummy;
	long				port_dummy;
	int					status;
	char				str_dummy[INET6_ADDRSTRLEN];
	char				str_v[3] = "v\0\0";

	struct sockaddr_in	*dummyv4;
	struct sockaddr_in6	*dummyv6;

	if (c != 2)
		return (1);

	memset(&init, 0, sizeof(init));
	init.ai_family = AF_UNSPEC;
	init.ai_socktype = SOCK_STREAM;

	status = getaddrinfo(v[1], NULL, &init, &res);
	read = res;

	while (read && !status)
	{
		if (read->ai_family == AF_INET)
		{
			dummyv4 = (struct sockaddr_in *)read->ai_addr;
			addr_dummy = &dummyv4->sin_addr;
			port_dummy = dummyv4->sin_port;
			str_v[1] = '4';
		}
		if (read->ai_family == AF_INET6)
		{
			dummyv6 = (struct sockaddr_in6 *)read->ai_addr;
			addr_dummy = &dummyv6->sin6_addr;
			port_dummy = dummyv6->sin6_port;
			str_v[1] = '6';
		}

		inet_ntop(read->ai_family, addr_dummy, str_dummy, sizeof(str_dummy));
		printf("\n	%s: %ld: %s\n", str_v, port_dummy, str_dummy);
		read = read->ai_next;
	}
	if (status)
		fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status));
	freeaddrinfo(res);
}
