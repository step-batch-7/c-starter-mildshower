#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
long square(int);
long cube(int);
unsigned int gcd(unsigned int, unsigned int);

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int num)
{
  return !is_even(num);
}

long square(int num)
{
  return (long)num * num;
}

long cube(int num)
{
  return square(num) * num;
}

unsigned int gcd(unsigned int num1, unsigned int num2)
{
  unsigned quotient;
  unsigned divisor = num1 < num2 ? num1 : num2;
  unsigned divident = num1 > num2 ? num1 : num2;
  while(divident % divisor != 0)
  {
    quotient = divident % divisor;
    divident = divisor;
    divisor = quotient;
  }
  return divisor;
}

int main(void)
{
  int num1, num2, num3, num4;
  int num5, num6;

  printf("Enter a number to check whether it is even or not: ");
  scanf("%d",&num1);
  printf("Your Entered Number %d is %s\n\n",num1,is_even(num1)?"Even":"Not Even");

  printf("Enter a number to check whether it is odd or not: ");
  scanf("%d",&num2);
  printf("Your Entered Number %d is %s\n\n",num2,is_odd(num2)?"Odd":"Not Odd");

  printf("Enter a number to find square: ");
  scanf("%d",&num3);
  printf("Square of entered number %d is %ld\n\n",num3,square(num3));

  printf("Enter a number to find cube: ");
  scanf("%d",&num4);
  printf("Cube of entered number %d is %ld\n\n",num4,cube(num4));

  printf("Enter two numbers to find GCD (separate by space): ");
  scanf("%d %d",&num5,&num6);
  printf("GCD of %u and %u is: %u\n\n",num5,num6,gcd(num5,num6));

  return 0;
}