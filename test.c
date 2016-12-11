#include <stdio.h>
#include <string.h>
 
int main()
{
    char test[] = "hello";
    for (int i = 0; i < strlen(test); i++)
    {
      printf("%c\n", test[i]);
    }
    return 0;
}