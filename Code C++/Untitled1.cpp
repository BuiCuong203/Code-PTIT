#include <stdio.h>
#include <signal.h>
#include <string.h>
int main()
{
    char realpassword[20];
    char givenpassword[20];
    
    strncpy(realpassword, "ddddddddddddddd", 20);
    gets(givenpassword);
    
    if(0 == strncmp(givenpassword, realpassword, 20)) {
    	printf("SUCCESS!\n");
	}
	else {
		printf("FAILURE!\n");
	}
	raise(SIGINT);
	printf("givenpassword: %s\n", givenpassword);
	printf("realpassword: %s\n", realpassword);
	return 0;
}
