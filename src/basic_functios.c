#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int num){
  return num % 2 == 0;
}

int main(void)
{
  int num1;
  printf("Enter a number to check whether it is even or not: ");
  scanf("%d",&num1);
  printf("Your Entered Number %d is %s",num1,is_even(num1)?"Even":"Not Even");
  return 0;
}