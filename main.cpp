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





int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		error();
	}
	printf("IP addresses for %s:\n\n", argv[1]);

	char *hostname = argv[1];
	char ip[100];
	
	hostNameToIP(hostname, ip);	
	
	printf("%s resolved to %s" , hostname , ip);
    printf("\n");
	
	return 0;
}