#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
   int len;
   scanf("%d",&len);
   char* s = (char *)malloc(512000 * sizeof(char));
//   char* s2 = (char *)malloc(512000 * sizeof(char));
   
   scanf("%s",s);
  
   
   
//   int mainCount = 0;
  
  char let[26] = {0};
  let[0] = s[0];
//array of unicue letters
for (int j = 0; j<len; j++){
      for (int n = 0; n < strlen(let); n++){
   if (let[n] == s[j]){
       break;
   }
   else if(n == (strlen(let) - 1)){
       let[strlen(let)] = s[j];
   }
  }
}




// int i=0;

// for (int p = 0; p < strlen(let); p++){
    
// }


//validation of the string
int count = 0;
for( int v = 0; v <len-2; v++){
    if ((v+2)<len){
        if (s[v]!=s[v+1]&&s[v]==s[v+2]){
            printf("if\n");
          count++;
      }
      else{
          count = 0;
          break;
          
      }
      
    }
    else if(s[v]!=s[v+1] && s[v]==s[v-2] && s[v+1]==s[v-2]){
        printf("here");
      count+=2;
  }
  else{
      count = 0;
      break;
  }
}

  
  printf("%i\n", count);
   return 0;
}