#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	int num, time, rad;
	scanf("%d %d", &num, &time);
	int coords[num][3];
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &coords[i][j]);
		}
	}
	for (int i = 0; i < time; i++)
	{
		for (int j = 0; j < num; ++j)
		{
			for (int k = 0; k < 3; ++k)
			{
				coords[j][k]+=1;
			}
		}
		for (int s = 0; s < num; ++s)
		{
			for (int t = 0; t < 3; ++t)
			{
				if(){

				}
			}
		}
	}
	printf("%d\n", coords[1][0]);
	return 0;
}