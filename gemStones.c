#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	int length = 100;
	scanf("%d", &n);
	char stones[n][length];
	char gemStones[26] = {'0'};

	int all = 0;
	char forTest;
	for (int i = 0; i < n; i++)
	{
		scanf("%s", stones[i]);
	}
	for(int i = 0; i < strlen(stones[0]); i++){
		int it = 0;
		int count = 1;
			char test = stones[0][i];
			while(++it<n){
			for (int t = 0; t < strlen(stones[it]); t++){
				if (stones[it][t]==test){
					count++;
					forTest = stones[it][t];
					break;
			}
			}	
		}
		if (count == n){
							int ifIn = 0;
							for(int m = 0; m < strlen(gemStones); m++){
								
								if (forTest == gemStones[m]){
									break;
								}
								else if (m == strlen(gemStones)-1){
									if (strlen(gemStones) == 0){
										gemStones[0] = forTest;
									}
									else {
										gemStones[strlen(gemStones)] = forTest;
									}
								}
							}
						}
		if (count == n){

		all++;

	}
	}
	// for (int i = 0; i < 26; ++i)
	// {
	// 	printf("%c\n", gemStones[i]);
	// }
	printf("%lu\n",strlen(gemStones)-1 );

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
