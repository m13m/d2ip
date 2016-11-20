/*
    .___________ .__        
  __| _/\_____  \|__|_____  
 / __ |  /  ____/|  \____ \ 
/ /_/ | /       \|  |  |_> >
\____ | \_______ \__|   __/ 
     \/         \/  |__|    

Authour : Mohd Maqbool Alam(alam.mohdmaqbool@gmail.com)

*/

#include "domainToIP.h"


/*
*
* @brief 
* Get the IP address of domain name.

*/
int hostNameToIP(char *hostname , char *ip)
{
    struct hostent *he;
    struct in_addr **addr_list; /* address in network byte order */
    int i;
         
    if ( (he = gethostbyname( hostname ) ) == NULL) 
    {
        // get the host info
        herror("gethostbyname");
        return 1;
    }
    

    addr_list = (struct in_addr **) he->h_addr_list;
    
    for(i = 0; addr_list[i] != NULL; i++) 
    {
        //Return the first one;

        strcpy(ip , inet_ntoa(*addr_list[i]) ); //IPv4 dotted notation 127.0.0.1
        return 0;
    }
     
    return 0;
}

/*
*
* @brief
* error handling when argc < 2
*/
void error()
{
	fprintf(stderr, "Usage : $ ./d2ip <domainname> \n" );
	exit(1);
}


