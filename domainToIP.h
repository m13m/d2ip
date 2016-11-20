/*
    .___________ .__        
  __| _/\_____  \|__|_____  
 / __ |  /  ____/|  \____ \ 
/ /_/ | /       \|  |  |_> >
\____ | \_______ \__|   __/ 
     \/         \/  |__|    

Authour : Mohd Maqbool Alam(alam.mohdmaqbool@gmail.com)

*/

#include <cstdio> //printf
#include <cstdlib> //for exit(0);
#include <cstring>//memset
#include <sys/socket.h>
#include <netdb.h> //hostent
#include <arpa/inet.h>//inet_ntoa

//hostname to IP address
int hostNameToIP(char* , char*);


//error when argc < 2
void error();

