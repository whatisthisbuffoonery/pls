int	socket(int domain, int type, int protocol);
//int sockfd = socket()
//
//domain = AF_INET,   <<ipv4
//
//type = SOCK_STREAM//  tcp
//type = SOCK_DGRAM//   ucp
//
//protocol = 0//        default for tcp
//
int	bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
//bind sockfd to addr
//0 on success, -1 on failure
//
int listen(int sockfd, int backlog);
//prepare to accept connections from clients
//backlog is number of desired clients, reject further connections
//
accept(sockfd, (struct sockaddr *) &addr, &addrlen);
//newsockfd = accept()
//called by listen() when client triggers connection()
//
int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
//0 on success, -1 on error
//
int	read(newsockfd, boffer, buffer_size);
int	write(newsockfd, boffer, buffer_size);
//send() receive() maybe later
//
int getaddrinfo(const char *node,   // e.g. "www.example.com" or IP
                const char *service,  // e.g. "http" or port number
                const struct addrinfo *hints,
                struct addrinfo **res);
//
//sockaddr_in and sockaddr_in6 are both obsolete now, theyd be used for gethostname()
//just above is what youd use instead
//^^^toss in own addrinfo &&struct to last param to be filled out
//^^^fill in ai_family, ai_socktype, ai_flags BEFORE doing this
//^^^addrinfo will come back as a full linked list, just take the first one
//return value is 0 on success, error code otherwise
//ai_flags = AI_PASSIVE for connections within own machine, set *node arg to NULL
//^^^*node arg is always the address of 
//
void	*memset(void *ptr, int value, size_t num);
//plss clear hints before using it
//
//
int setsockopt(int socket, int level, int option_name, const void *option_value, socklen_t option_len);
//^^^int yes = 1;
//^^^(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes)) //call right before bind()
//
//
//valgrind:
void	freeaddrinfo(struct addrinfo *ai);
//
//
struct	addrinfo
{
	int				ai_flags;     // AI_PASSIVE, AI_CANONNAME, etc.
	int				ai_family;    // AF_INET, AF_INET6, AF_UNSPEC
	int				ai_socktype;  // SOCK_STREAM, SOCK_DGRAM
	int				ai_protocol;  // use 0 for "any"
	size_t			ai_addrlen;   // size of ai_addr in bytes
	struct sockaddr	*ai_addr;      // struct sockaddr_in or _in6
	char			*ai_canonname; // full canonical hostname

	struct addrinfo	*ai_next;      // linked list, next node
};
//sockaddr consists of LIES AND FUCKING DECEIT:
struct	sockaddr
{
	sa_family_t sa_family;
	char		sa_data[14];
};
//
//sockaddr * will usually point to an existing sockaddr_in or in6,
//reassign it to those to get the right structure
//sa_data ALWAYS has relevant data overflowing past 14 chars^^^^^^^
//
//
//pls use:
// (IPv4 only--see struct sockaddr_in6 for IPv6)

struct	sockaddr_in
{
	short int			sin_family;  // Address family, AF_INET
	unsigned short int	sin_port;    // Port number
	struct in_addr		sin_addr;    // Internet address
	unsigned char		sin_zero[8]; // Same size as struct sockaddr
};
// (IPv4 only--see struct in6_addr for IPv6)

// Internet address (a structure for historical reasons)
struct	in_addr
{
	uint32_t	s_addr; // that's a 32-bit int (4 bytes)
};
//
//pls also use:
// (IPv6 only--see struct sockaddr_in and struct in_addr for IPv4)

struct	sockaddr_in6
{
	u_int16_t		sin6_family;   // address family, AF_INET6
	u_int16_t		sin6_port;     // port, Network Byte Order
	u_int32_t		sin6_flowinfo; // IPv6 flow information
	struct in6_addr	sin6_addr;     // IPv6 address
	u_int32_t		sin6_scope_id; // Scope ID
};
//this too:
struct	in6_addr
{
	unsigned char	s6_addr[16];   // IPv6 address
};



//									  |
//									  |
//to make in_addr or in6_addr later   v
//the following is a fucking bandaid solution
//it just replaces sockaddr where youd otherwise be tossing sockaddr:
struct	sockaddr_storage
{
	sa_family_t  ss_family;     // address family

	// all this is padding, implementation specific, ignore it:
	char	__ss_pad1[_SS_PAD1SIZE];
	int64_t	__ss_align;
	char	__ss_pad2[_SS_PAD2SIZE];
};
