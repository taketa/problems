#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
// gcc -std=c99 -o good test.c
int main(){
    int n; 
    int k; 
    int couAll = 0;
    scanf("%d %d",&n,&k);
    int *x = malloc(sizeof(int) * n);
    for(int x_i = 0; x_i < n; x_i++){
       scanf("%d",&x[x_i]);
    }
    int p = 1;
    int buf;
    while(p==1){
      p=0;
      for (int i = 0; i < n-1; i++)
      { 
        if(x[i]>x[i+1]){
          buf = x[i];
          x[i] = x[i+1];
          x[i+1] = buf;
          p=1;
        }
      }
    }
int arr[x[n-1]];
for (int i = 0; i < x[n-1]; ++i)
{
  arr[i] = 0;
}
for (int i = 0, j = 1; j <= x[n-1]; j++)
{
  if (x[i] == j){
    arr[j] = x[i];
    i++;
  }
}
for (int i = 0; i < x[n-1]+1;)
 { 
  while(arr[i]==0){
    i++;
  }
  if(arr[i+k] == 0){

    i++;
    couAll++;
    continue;

  }
    i+=k*2+1;
  couAll++;
 } 
printf("%i\n", couAll);
    return 0;
}
