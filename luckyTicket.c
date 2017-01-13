#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// gcc -std=c99 -o good cheredSimvoli.c
int main(int argc, char const *argv[])
{
	char number[101];
	scanf("%s",number);
	int i = 0;
	while(number[i]!='\0'){
		int sum1 = 0;
		char sum1str[3];
		int sum2 = 0;
		char sum2str[3];
			for (int j = 0; j <= i; ++j)
			{
				sum1+=number[j]-'0';
			}
			while(sum1>9){
				sprintf(sum1str, "%i", sum1);
				sum1 = (sum1str[0]-'0')+(sum1str[1]-'0');
			}
			for (int j = i+1; j < strlen(number); ++j)
			{
				sum2+=number[j]-'0';
			}
			while(sum2>9){
				sprintf(sum1str, "%i", sum1);
				sum2 = (sum2str[0]-'0')+(sum2str[1]-'0');
			}
			if (sum1 == sum2){
				printf("YES\n");
				return 0;
			}
		i++;
	}
	printf("NO\n");
	return 0;
}