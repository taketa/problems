#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int data[2] = {0};    
    for(int arr_i = 0; arr_i < 2; arr_i++){
        scanf("%d",&data[arr_i]);  
    }
    int arr[data[0]];
    int arrRotation[data[0]];
    for(int arr_i = 0; arr_i < data[0]; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for (int j = 0; j < data[1]; j++){
        int buf = arr[0];
        for (int i = 0; i < data[0]; i++){    
        if (i == data[0] - 1){
            arr[i] = buf;
        }
        else{
            arr[i] = arr[i+1];
        }
    }
    }
    for (int i = 0; i < data[0]; i++){
        printf("%i ", arr[i] );
    }
    printf("\n");
    return 0;
}


