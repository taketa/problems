#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>




int main(int argc, char const *argv[])
{
	char s[1001];
	

	for (int i = 0; i < strlen(s); ++i)
	{
		if(i<strlen(s)-1){
			if((islower(s[i]) && islower(s[i+1])) || (isupper(s[i]) && isupper(s[i+1]) && s[i] == s[i+1] )){
			printf("NO\n");
			return 1;
		}

		}
		else if((islower(s[i]) && islower(s[i-1])) || (isupper(s[i]) && isupper(s[i-1]) && s[i] == s[i-1] )){
			printf("NO\n");
			return 1;
		}
		
		
	}
printf("YES\n");
	return 0;
}