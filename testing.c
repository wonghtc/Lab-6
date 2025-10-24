#include <stdio.h>
int main(){
  int x = 12;
  int array[] = {0,1,2};
  if (x==10){
      x--;
      array[2] = 20;
  }
  printf("%d \n %d \n",x,array[2]);
return 0;
}
