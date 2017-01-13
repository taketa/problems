#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	int numCards = 0;
	
	// printf("%i\n", isint(numCards));
	scanf("%d", &numCards);
	do{
		scanf("%d", &numCards);
	}
	while (numCards == 0 || numCards<2 || numCards>100);
	// printf("%i\n", isdigit(numCards));
	int cards[numCards];
	for (int i = 0; i < numCards; ++i)
	{
		scanf("%d", &cards[i]);
	}
	int p = 1;
    int buf;
    while(p==1){
      p=0;
      for (int i = 0; i < numCards-1; i++)
      { 
        if(cards[i]<cards[i+1]){
          buf = cards[i];
          cards[i] = cards[i+1];
          cards[i+1] = buf;
          p=1;
        }
      }
    }
    int half = numCards/2;
    int sumPl = 0;
    int sumDil = 0;
    for (int i = 0; i < half; ++i)
    {
    	sumPl+=cards[i];
    }
    for (int i = half; i < numCards; ++i)
    {
    		sumDil+=cards[i];
    }
    int output = sumPl - sumDil;
    printf("%i\n", output);


	return 0;
}