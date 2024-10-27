#include <stdio.h>
#include <cs50.h>
int main(void){
int x = get_int("guess a number between 1 and 5\n");
if(x < 1 || x > 5){
 printf(" you are out of the range of guess\n");
}
  else if (x ==3){
  printf("is got right\n");
  }
  else
   printf("is got wrong");
  }
