//represent any number of consecutive leading, trailing, or sandwiched 0s with ::
//0001:0000:0000:0000:0000:0000:0000:0001
//1::1
//0000:0000:0000:0000:0000:0000:0000:0001
//::1
//0001:0000:0000:0000:0000:0000:0000:0000
//1::
//
//do not include sections partially filled with 0s
//
//
//subnet who
//
//query port numbers with either IANA pdf online or with 'cat /etc/services'
//
//htons()  host to network short, ntonhs reverses this
//htonl()  host to network long, ntohl reverses this
//
// inet_ntop() network to presentation, inet_pton() reverses this
// IPv4:

char ip4[INET_ADDRSTRLEN];  // space to hold the IPv4 string
struct sockaddr_in sa;      // pretend this is loaded with something

inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);

printf("The IPv4 address is: %s\n", ip4);


// IPv6:

char ip6[INET6_ADDRSTRLEN]; // space to hold the IPv6 string
struct sockaddr_in6 sa6;    // pretend this is loaded with something

inet_ntop(AF_INET6, &(sa6.sin6_addr), ip6, INET6_ADDRSTRLEN);

printf("The address is: %s\n", ip6);

//subnet who
