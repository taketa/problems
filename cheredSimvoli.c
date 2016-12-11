#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// gcc -std=c99 -o good cheredSimvoli.c
int main() {
const int LENGTH = 100001;
int tesCase;
scanf("%d", &tesCase);
char arr[tesCase][LENGTH];
for (int i = 0; i < tesCase; ++i)
{
	scanf("%s", arr[i]);
}
	for (int i = 0; i < tesCase; i++)
	{
		int count =0;
		for (int j = 0; j < strlen(arr[i])-1; j++)
		{
			if (arr[i][j]==arr[i][j+1]){
				arr[i][j]='0';
				count++;
			}
		}
		printf("%i\n", count);
	}
	
    return 0;
}
