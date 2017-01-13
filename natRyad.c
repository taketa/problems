#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// gcc -std=c99 -o good cheredSimvoli.c
int main(int argc, char const *argv[])
{
	char string[38889];
	char strFind[6];
	scanf("%s", strFind);
	int numCount = 1;
	int i = 0;
	while(numCount<10000)
	{
		char num[6];
		sprintf(num, "%d", numCount);
		for (int j = 0; j < strlen(num); ++j)
		{
			string[i] = num[j];
			i++;
		}
		numCount++;
	}
	char *result = strstr(string, strFind);
	int position = result - string;
	printf("%i\n", position+1);
	return 0;
}