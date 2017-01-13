#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int heads;
	int powerMain = 0;

	scanf("%i", &heads);
	for (int i = 1; i <=heads; i+)+
	{

		int buferHeads = 0;
		int power = 1;
		int buf = i;
		while(buferHeads<=heads){
			printf("%i\n", i);
			printf("here\n");
			if((buf+buferHeads)<=heads){
				// printf("bufer heads = %i\n", buferHeads);
				buferHeads += buf;
				power *= buf;
			}
			buf--;
			// printf("%i\n", buf);
		}
		if (power>powerMain)
		{
			powerMain = power;
		}
	}
	printf("%i\n", powerMain);
	return 0;
}