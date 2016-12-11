#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h> //tolower()
const int SIZE = 1000;
int main(int argc, char const *argv[])
{
    char string[SIZE]; 
    fgets(string, SIZE, stdin);
    
char let[26] = {0};
  let[0] = tolower(string[0]);

	for (int j = 0; j<strlen(string); j++){
		if(string[j]!='\0' && string[j]!=' ' && string[j]!='\n'){
				for (int n = 0; n < strlen(let); n++){
   if (let[n] == tolower(string[j])){
       break;
   }
   else if(n == (strlen(let) - 1)){
       let[strlen(let)] = tolower(string[j]);
   }
  }
		}
      
}
if (strlen(let)==26){
	printf("pangram\n");

}
else printf("not pangram\n");

	return 0;
}


