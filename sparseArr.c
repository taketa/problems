#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int N;
	int Q;
	scanf("%i", &N);
	char arr[N][20];
	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr[i]);
	}
	scanf("%i", &Q);
	char arrTest[Q][20];
	for (int i = 0; i < Q; i++)
	{
		scanf("%s", arrTest[i]);
	}
	for (int i = 0; i < Q; i++)
	{
		int cou = 0;
		for (int j = 0; j < N; j++)
		{
			if (strcmp(arr[j],arrTest[i]) == 0){
				cou++;
			}
		}
		printf("%i\n", cou);
	}   
    return 0;
}
