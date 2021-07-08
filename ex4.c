#include<stdio.h>
#include<stdlib.h>

int main(){
  int x=0,y=0,z;

  printf("Rolling the dice...\n");

  while(1>=x|x>=6)x = rand();

  printf("Die 1: %d\n",x);

  while(1>=y|y>=6)y = rand();

  printf("Die 2: %d\n",y);

  z = x + y;
  printf("Total value: %d\n",z);
  
  if(z>7)printf("%s won!\n",str);
  else print("%s lost.\n",str);
  
  return 0;
}
