#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// gcc -std=c99 -o good cheredSimvoli.c


int main(int argc, char const *argv[])
{
	int size = 3;
	int y = size;
int x = size - 1;
int d = -1;
int counter = 1;
int matrix[x][y];

for(int i=x; i>=0;)
{
for(int j=i; j>=0; --j) {
y += d;
matrix[x][y] = counter++;
}
--i;
for(int j=i; j>=0; --j) {
x += d;
matrix[x][y] = counter++;
}
d *= -1;
}
for (int i = 0; i < size; ++i)
{
	for (int j = 0; j < size; ++j)
	{
		printf("%i ", matrix[i][j]);
	}
	printf("\n");
}
	return 0;
}