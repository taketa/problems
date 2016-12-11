#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%i", &num);
	char S[num][10001];
	for (int i = 0; i < num; i++)	
	{
		scanf("%s", S[i]);
	}
	for (int i = 0; i < num; i++)
	{	
		for (int j = 0, ir = strlen(S[i])-1; j < strlen(S[i])-1; j++, ir--)
		{
			if(abs(S[i][j+1]-S[i][j])!=abs(S[i][ir-1] - S[i][ir])){
				printf("Not Funny\n");
				break;
			}
			else if (j==(strlen(S[i])-2)){
				printf("Funny\n");
			}
		}
	}
    return 0;
}
