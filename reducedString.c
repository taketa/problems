#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// gcc -std=c99 -o good test.c

int main() {

   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int test = 0;
    int check = 1;
    char str[101] = {0};
    fgets(str, 101, stdin);
    while(check>0){
    	printf("========================\n");
    	check = 0;
    	for (int i = 0; i < 101; i++){
        if (str[i]!=0 && str[i]!='\0' && str[i]!='\n'){
        	for(int j = i+1; j <101; j++){
        		if (str[j]!=0 && str[j]!='\0' && str[j]!='\n' &&
        			str[i]==str[j]){
        			printf("%c %c\n",str[i], str[j]);
        			printf("%c %c\n",str[i], str[j]);
        			str[i]=0;
        			str[j]=0;
        			i= 0;
        			for (int i = 0; i < 101; i++){
        				if(str[i]!='\0' && str[i]!='\n' &&
        					str[i]!=0){
        					printf("%c", str[i]);
        				}
        			}
        			printf("\n");
        			i = j+1;
        			check = check + 1;
        			break;
        		}
        	}

        }

    }

    }
    for (int i = 0; i < 101; i++){
    	if (str[i]!=0 && str[i]!='\0' && str[i]!='\n'){
    		
    	test = 1;
    }
        if (str[i]!=0 && str[i]!='\0' && str[i]!='\n'){
            
            
            printf("%c", str[i] );
        }
        
    }
    printf("\n");
    if (test == 0){
printf("Empty String\n");
        }
 

   return 0;
}