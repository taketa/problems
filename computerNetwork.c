#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// gcc -std=c99 -o good cheredSimvoli.c

int main(int argc, char const *argv[])
{
	int pigs,price,tugrics;
	scanf("%i %i %i", &pigs, &price, &tugrics);
	int coords[pigs][2];
	int coordsNum[pigs];
	int startCoord[2];
	int sum = 0;
	for (int i = 0; i < pigs; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			scanf("%i", &coords[i][j]);	
		}
		
	}
	for (int i = 0; i < 2; ++i)
	{
		scanf("%i",&startCoord[i]);
	}
	int startCoordNum = startCoord[0] + startCoord[1];

	//action
	//poisk blizhayshey k startTochke coordinatu 
	int indexFirst = -1;
	for (int i = 0; i < pigs; ++i)
	{
		coordsNum[i] = coords[i][0] + coords[i][1];
		if (startCoordNum - coordsNum[i]>indexFirst)
		 {
		 	indexFirst = i;
		 } 
	}
	for (int i = 0; i < pigs; ++i)
	{
		if (i != indexFirst)
		{
			sum += abs(coordsNum[indexFirst] - coordsNum[i]);
			// printf("sum = %i, %i %i\n", sum,coordsNum[i],coordsNum[i]);
		}
	}
	// printf("indexFirst = %i; sum = %i; tugrics = %i\n",indexFirst, sum, tugrics );
if (price*sum<=tugrics)
{
	printf("YES\n");
}
else{
	printf("NO\n");
}



	return 0;
}