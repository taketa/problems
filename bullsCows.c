#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[2];
    char task[4];
    char try[4];
    int bulls = 0;
    int cows = 0;
    int arr_i;
    for(arr_i = 0; arr_i < 2; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sprintf(task, "%d", arr[0]);
    sprintf(try, "%d", arr[1]);
    for (int i = 0; i < 4; i++){
            if (task[i] == try[i]){
                bulls++;
            }
    }
    for(int i =0; i< strlen(task); i++){
        for (int j =0; j < strlen(try); j++ ){
            if ((i!=j) && (task[i] == try[j])){
                cows++;
            }
        }
    }
    printf("%i %i\n", bulls, cows );

    return 0;
}
