#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%i", &n);
	int plat[n];
	int rate = 0;
	int one;
	int two;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &plat[i]);
	}
	for (int i = 0; i < n;)
	{
		if ((i+1)<n)
		{
			one = abs(plat[i+1] - plat[i]);
			if ((i+2)<n)
			{
				one += abs(plat[i+2] - plat[i+1]);
				two = abs(3*(plat[i+2] - plat[i]));

			if (one<two)
			{
				rate+=one - abs(plat[i+2] - plat[i+1]);
				i++;
			}
			else{
				rate+=two;
				i+=2;
			}
			}
			else{
			rate+=one;
			i++;
		}
		}
		else break;
		
		
	}
	printf("%i\n", rate);
	return 0;
}