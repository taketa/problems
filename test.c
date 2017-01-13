#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int num1,num2,count,res;
scanf("%d",&num1);
char str1[num1][30];
for (int i=0;i<num1;i++){
scanf("%s",str1[i]);
}
scanf("%d",&num2);
char str2[num2][30];
for(int j=0;j<num2;j++){
scanf("%s",str2[j]);
}



for(int i=0;i<num1;i++){
res=0;
for(int h=0;h<num2;h++){
count=0;
for(int j=0,k=0;j<strlen(str1),k<strlen(str2);j++,k++){
str1[i][j]!=str2[h][k];
count++;
}
if (count==1)
res++;
}
}
printf("%d ",res);
}