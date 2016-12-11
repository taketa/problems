// gcc -std=c99 -o good test.c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int sizeInp;
	int testcase;

	scanf("%i",&testcase);
	char result[testcase];
	int n = 0;
	MAINLOOP:while(n<testcase){
		scanf("%i",&sizeInp);
	
	char sizeArr[sizeInp][sizeInp];
	for (int i = 0; i < sizeInp; i++){
			scanf("%s", sizeArr[i]);
	}	
	char buf;
	for (int i = 0; i < sizeInp; i++){
		// sorting
		int test = 1;
		while(test == 1){
			test = 0;
			for (int j = 0; j < sizeInp-1; j++){
				if (sizeArr[i][j]>sizeArr[i][j+1]){
					test = 1;
					buf = sizeArr[i][j];
					sizeArr[i][j] = sizeArr[i][j+1];
					sizeArr[i][j+1] = buf;
				}
			}
		}
		for (int j = 0; j < sizeInp; j++){
			if ((sizeArr[i][j+1]<sizeArr[i][j] && sizeArr[i][j+1]!=sizeArr[i][j]) || (sizeArr[j+1][i]<sizeArr[j][i] && 
							sizeArr[j+1][i]!=sizeArr[j][i])){
				result[n] = 'n';
				n++;
				goto MAINLOOP;
			}
			
		}

	}

	{
		/* code */
	}
	result[n] = 'y';
	n++;

	}
	for (int u = 0; u < sizeInp; u++){
		printf("%s\n", sizeArr[u]);
	}
	for (int i = 0; i < sizeInp; i++)
	{
		if (result[i] == 'n'){
			printf("NO\n");
		}
		else if(result[i]=='y'){
			printf("YES\n");

		}
	}
	




	
    return 0;
}
